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
	char subnet_mask[16];
	char* ip_octeto;
	char* subnet_mask_octeto;
	int dot1=0;
	int dot2=0;
	int ip_octetos[5];
	int subnet_mask_octetos[5];
	int binario[33];

	printf("Formato de ip: 192.168.20.2\n");
	printf("Ingrese la ip con el formato dado: ");
	scanf("%15s", ip);
	size_t ip_size = strlen(ip);
	
	if( ip_size < 7 || ip_size > 15)
		printf("Error, formato no aceptado");

	printf("Formato de subnet mask: 255.255.255.255\n");
	printf("Ingrese la subnet mask con el formato dado: ");
	scanf("%15s", subnet_mask);
	size_t subnet_mask_size = strlen(subnet_mask);

	if( subnet_mask_size < 7 || subnet_mask_size > 15)
		printf("Error, formato no aceptado");

	//validar que la ip tenga exactamente tres puntos
	for(int i = 0; i < 16; i++){
		if( ip[i] == '.' )
			dot1++;
	}

	if(dot1 > 3 || dot1 < 3)
		printf("Error, formato no aceptado\n");
		printf("Hay un error en la ip dada, numero de puntos: %d\n\n", dot1);
	
	//validar que en la ip no haya numeros negativos y que esten dentro del rango 0-255
	ip_octeto = strtok(ip, ".");
	for(int i = 0; i < 4; i++){
		printf("octeto %d -> %s\n", i+1, ip_octeto);
		if( (atoi(ip_octeto) < 0 || atoi(ip_octeto) > 255) ){
			printf("Error, formato no aceptado (0-255) en uno de los octetos %d\n", i+1);
			//para que el array octetos no tenga informacion erronea cuando ocurre un error, se le asigna un 0 en la posicion del numero con formato no aceptado
			ip_octetos[i] = 0;
		}
		else 
			ip_octetos[i] = atoi(ip_octeto); 
		ip_octeto = strtok(NULL, ".");
	}

	//validar que la ip tenga exactamente tres puntos
	for(int i = 0; i < 16; i++){
		if( subnet_mask[i] == '.' )
			dot2++;
	}

	if(dot2 > 3 || dot2 < 3)
		printf("Error, formato no aceptado\n");
		printf("Hay un error en la subnet mask dada, numero de puntos: %d\n\n", dot2);

	subnet_mask_octeto = strtok(subnet_mask, ".");
	for(int i = 0; i < 4; i++){
		printf("octeto %d -> %s\n", i+1, subnet_mask_octeto);
		if( (atoi(subnet_mask_octeto) < 0 || atoi(subnet_mask_octeto) > 255) ){
			printf("Error, formato no aceptado (0-255) en el octeto %d\n", i+1);
			//para que el array octetos no tenga informacion erronea cuando ocurre un error, se le asigna un 0 en la posicion del numero con formato no aceptado
			subnet_mask_octetos[i] = 0;
		}
		else 
			subnet_mask_octetos[i] = atoi(subnet_mask_octeto); 
		subnet_mask_octeto = strtok(NULL, ".");
	}
	
	printf("subnet mask: %d.%d.%d.%d\n\n", subnet_mask_octetos[0], subnet_mask_octetos[1], subnet_mask_octetos[2], subnet_mask_octetos[3] );

	//conversion a binario
	for (int i = 0; i < 4; i++) {
        	for (int j = 7; j >= 0; j--) {
            		binario[i * 8 + j] = ip_octetos[i] & 1;
            		ip_octetos[i] >>= 1;
        	}
    	}
	
	printf("ip en binario: ");
	for (int i = 0; i < 32; i++) {
        	printf("%d", binario[i]);
        	if ((i + 1) % 8 == 0) {
            		printf(".");
        	}
    	}
	printf("\n\n");

	//calculo del broadcast
}
int main(){
	function();
	return 0;
}
