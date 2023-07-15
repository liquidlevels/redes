#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){
	int listenfd, connfd;
	struct sockaddr_in servaddr, cliaddr;
	socklen_t clilen;
	char buf[1024];

	listenfd = socket(AF_INET, SOCK_STREAM, 0);
	if(listenfd < 0){
		perror("socket");
		exit(1); //1 = el programa que hizo este wey tiene un error
	}

	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(8080);
	servaddr.sin_addr.s_addr = INADDR_ANY;

	bind(listenfd, (struct sockaddr *)&servaddr, sizeof(servaddr));
	listen(listenfd, 10);

	while(1){
		clilen = sizeof(cliaddr);
		connfd = accept(listenfd, (struct sockaddr *)&cliaddr, &clilen);
		if(connfd < 0){
			perror("accept");
			exit(1);
		}
	}

	while(1){
		int n = read(connfd, buf, sizeof(buf));
		if(n < 0){
			perror("read");
			exit(1);
		} else if (n == 0){
			break;
		}

		write(connfd, buf, n);
	}

	close(connfd);
}
