#include <stdio.h>
#include "string.h"

int main(){
	struct frame{
		char sync[62];
		char delimiter[2];
		char destiny[48];
		char source[48];
		char lenghtType[16];
		char data[1500];
		char check[32];
	};
	struct frame envio;
	//strcpy(envio.sync, "11");
	//strcpy(envio.destiny, "100");
	strcpy(envio.destiny,"192.168.0.3");
	printf("id es %s\n", envio.destiny);
	return 0;
}
