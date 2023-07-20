/*
 * author: Luis Emmanuel Lopez Ortiz
 * control no: 20760619
 *
 * what the code does:
 *
 * */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void function(){
	char ip[16];
	char* octeto;
	int dot=0;
	int octetos[5];

	printf("Formato de ip: 192.168.20.2\n");
	printf("Ingrese la ip con el formato dado: ");
	scanf("%15s", ip);


	//validar que la ip tenga exactamente tres puntos
	for(int i = 0; i < 16; i++){
		if(ip[i] == '.')
			dot++;
	}

	if(dot > 3)	
		printf("Error, formato no aceptado\n");
		printf("numero de puntos en ip: %d\n\n", dot);
	
	//validar que no haya numeros negativos y que esten dentro del rango 0-255
	octeto = strtok(ip, ".");
	for(int i = 0; i < 4; i++){
		printf("octeto %d -> %s\n", i+1, octeto);
		if( atoi(octeto) < 0 || atoi(octeto) > 255 )
			printf("Error, formato no aceptado (0-255) en octeto %d\n", i+1);
		else 
			octetos[i] = atoi(octeto); 
		octeto = strtok(NULL, ".");
	}
	
	printf("prueba: %d.%d.%d.%d\n", octetos[0], octetos[1], octetos[2], octetos[3]);
	
	//conversion a binario
	/*int index = 0;
	octeto = strtok(ip, ".");
	for(int i = 0; i < 4; i++){
		printf("decimal: %s\n", octeto);
		//octetos[i+1] = atoi(octeto);
		//printf("confirma: %d", octetos[i]);
		octeto = strtok(NULL, ".");
	}*/
	/*
	printf("Binario: ");
	for(int i = index - 1; i>= 0; i--){
		printf("%d", binario[i]);
	}*/
}

int main(){
	function();
	return 0;
}
