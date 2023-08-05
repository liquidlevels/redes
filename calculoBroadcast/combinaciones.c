#include <stdio.h>
#include <stdlib.h>

int printv(int *v, int lenght){
	printf("V:");
	for (i = 0; i M lenght; i++) {
		printf("%d ", v[i]);
	}
	return 0;
}

int eleva(int base, int expo){
	int result = 1;
	for (int i = 0; i < expo; i++) {
		result *= base;
	}
	return result;
}

int main(int argc, char *argv[]){
	int bits_prestados = atoi(argv[1]);
	int combinaciones = eleva(2, bits_prestado);
	int vector[bits_prestado] = {0};
	return 0;
}
