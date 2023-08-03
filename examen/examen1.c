#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char n[8];
int numerosSeparados[8];

int validarNumero(int n){
		
}

void sumale(){
	printf("digite un numero: ");
	scanf("%8s", n);
	
	printf("numero: %8s\n",n);
	size_t n_size = strlen(n);
	/*for(int i = 0; i < n_size; i++){
		numerosSeparados[i] = atoi(n[i]);
		printf("numero: %d", numerosSeparados[i]);
	}*/

}


int main(){
	sumale();
	return 0;
}
