#include <stdio.h>
#include <string.h>
/*
 * autor: Luis Emmanuel Lopez Ortiz
 * no. Control: 20760619
 * 
 */

void decimalValidation(){
	int ip[16];
	int octetos[5] = sscanf(ip, "%d.%d.%d.%d", &octetos[0], &octetos[1], &octetos[2], &octetos[3]);

	printf("%d", ip);

}

int main(){
	decimalValidation();
	return 0;
}
