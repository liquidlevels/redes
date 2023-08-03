/*
 * author: Luis Emmanuel Lopez Ortiz
 * control number: 20760619
 *
 * this code receive a number, then split the number and put the numbers into an int array, then get a 
 * position and a number then get the number on x position and sum that number and the number it got
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int digits[10];
int dividedNumber[10] = {0,1,2,3,4,5,6,7,8,9};
int vectorLength = sizeof(digits) / sizeof(digits[0]);
void splitNumber(int number){
	//thank to chatgpt and https://www.log2base2.com/c-examples/loop/split-a-number-into-digits-in-c.html
	printf("length: %d\n", vectorLength);
	int i = vectorLength;
	while(number > 0){
		int split = number % 10;
		digits[i] = split;
		//printf("[%d] ", digits[i]);
		number /= 10;
		i--;
	}
	/*
	printf("\n");
	for(int i = 0; i < vectorLength; i++){
		printf("[%d] ", digits[i+1]);
	}
	printf("\n");*/
}

int sum(int position, int sumValue){
	
	if(position > vectorLength-1 || position < vectorLength){
		printf("error, number higher or lower than array length\n");
		return 0;
	}

	printf("before sum ");
	for(int i = 0; i < vectorLength; i++){	
		printf("[%d] ", digits[i+1]);
	}
	printf("\n");

	printf("in the %d position we add: %d\n", position, sumValue);
	digits[position+1] = digits[position+1] + sumValue;

	for(int i = 0; i < vectorLength; i++){
		printf("[%d] ", digits[i+1]);
	}
	printf("\n");
	return 0;
}

int main(){
	splitNumber(1234567896);
	sum(10,32);
	sum(-1, 2);
	return 0;
}
