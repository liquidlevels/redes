/*
 * author: Luis Emmanuel Lopez Ortiz
 * control number: 20760619
 *
 * this code do nothing but find a sum of two numbers in an array
 * 
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vector[12] = {0,1,1,2,3,5,8,13,21,33,54,7};
int vectorComparator[12];
int flag = 0;

int sumFinder(int number){
	int vectorLength = sizeof(vector) / sizeof(vector[0]);

	printf("vectorLength: %d\n", vectorLength);

	for(int i = 0; i < vectorLength; i++){
		vectorComparator[i] = vector[i];
	}

	for(int i = 0; i < vectorLength; i++){

		printf("[%d] ", vectorComparator[i]);
	}
	
	printf("\n");
	//try 1
	/*	
	for(int i = 0; i < vectorLenght; i++){
		if (vector[i] + vector[i+1] == number)
			printf("si es bro, %d + %d = %d\n", vector[i], vector[i+1], number);
		else 	
			printf("no es bro %d + %d != %d\n", vector[i], vector[i+1], number);
				
	}*/

	//try 2
	/*
	int j=0;
	for(int i = 0; i < vectorLenght; i++){
		if(vectorComparator[j] + vector[i] == number){
			printf("si es bro, %d + %d = %d\n", vectorComparator[j], vector[i], number);
		} else {
			printf("no es bro %d + %d != %d\n", vectorComparator[j], vector[i], number);
		}

	}
	j++;
	
	for(int i = 0; i < vectorLenght; i++){
		for(int j = 0; j < vectorLenght; j++){
			if(vectorComparator[j] + vector[i] == number){	
			printf("si es bro, %d + %d = %d\n", vectorComparator[j], vector[i], number);
			} //else {
			//	printf("no es bro %d + %d != %d\n", vectorComparator[j], vector[i+1], number);
			//}
		}
	}*/

	//try 3
	
	int i=0, j=0;
	do {
		if( i > vectorLength)
			break;
		for(i = j+1; i < vectorLength; i++){
			//printf("posicion: j:%d, i:%d", j, i);
			if(vectorComparator[j] + vector[i] == number){	
				printf("positions: [%d] and [%d]\n", j, i);
				printf("%d + %d = %d\n", vectorComparator[j], vector[i], number);
			}		
			
		}
		j++;
		
	} while(j < vectorLength);

	
}

int main(){
	sumFinder(21);
	return 0;
}
