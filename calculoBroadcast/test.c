#include <stdio.h>
#include <string.h>

void function(){
	char source[16];
	char ip[16];
	const char dot[3] = ".";
	char* token;
	int i = 0;
	int decimal[4];

	printf("Give me the ip: ");
	scanf("%15s", source);

	//Pasa el contenido de source a ip
	while(source[i] != '\0'){
		ip[i] = source[i];
		i++;
	}
	ip[i] = '\0';
	
	printf("source: %s\n", source);
	printf("ip: %s\n", ip);

	//Separa cada octeto de la ip dada y lo asigna al array llamado decimal
	token = strtok(source, dot);
	while(token != NULL){
		printf("%s\n", token);
		int num = 0;
		sscanf(token, "%d", &num);
		decimal[i] = num;
		token = strtok(NULL, ".");	
		i++;
	}
	printf("\n\n");

	//Valida que no haya numeros negativos
	while(decimal[i] != '\0'){
		if(decimal[i] < 0 || decimal[i] > 255){
			printf("Error, no cumple con los estandares (0 a 255): %d\n", decimal[i]);
		} else {
			printf("%d ", decimal[i]);
		}
		i++;
	}
	printf("\n");
	
	//valida que solo haya tres puntos en la ip

	//Conversion de decimal a binario
	/*while (decimal > 0) {
        	binary[i++] = decimal % 2;
          	decimal = decimal / 2;
      	}	
  
      	printf("Binary: ");
      	for (int index = i - 1; index >= 0; index--) {
        	printf("%d ", binary[i]);
      	}
      	printf("\n");
	*/
}

int main(){
	function();
	return 0;
}
