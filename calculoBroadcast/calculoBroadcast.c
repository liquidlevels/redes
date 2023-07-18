#include <stdio.h>
#include <string.h>
/*
 * autor: Luis Emmanuel Lopez Ortiz
 * no. Control: 20760619
 * 
 */

void decimalValidation(){
	//
	struct structure{
		char ip[14];
	};
	struct structure declaracion;
	String decimalIp;

	printf("Dame la ip en este formato: 223.201.202.102\n");
	scanf("%s\n", &decimalIp);
	strcpy(declaracion.ip, decimalIp);
   	char * token = strtok(declaracion.ip, ".");
   	while( token != NULL) {
      		printf( " %s", token ); //printing each token
      		token = strtok(NULL, ".");
   	}
	printf("\n");
}

int main(){
	decimalValidation();

	return 0;
}
