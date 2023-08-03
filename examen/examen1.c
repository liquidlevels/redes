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
//max number for an integer is 2147483647
int counter = 0;
int digits[10];
int dividedNumber[10] = {0,1,2,3,4,5,6,7,8,9};
int vectorLength = sizeof(digits) / sizeof(digits[0]);

void splitNumber(int number){
	//thank to chatgpt and https://www.log2base2.com/c-examples/loop/split-a-number-into-digits-in-c.html
	int i = vectorLength;
	while(number > 0){
		int split = number % 10;
		digits[i] = split;
		printf("[%d] ", digits[i]);
		number /= 10;
		i--;
	}
	printf("\n");
	for(int i = 0; i < vectorLength; i++){
		printf("[%d] ", digits[i+1]);
	}
	printf("\n");
}

void sum(int position, int sumValue){
	for(int i = 0; i < vectorLength; i++){
		printf("[%d] ", digits[i+1]);
	}
	printf("\n");

	printf("in the %d position we add: %d\n", position, sumValue);
	digits[position] = digits[position] + sumValue;
	for(int i = 0; i < vectorLength; i++){
		printf("[%d] ", digits[i]);
	}
	printf("\n");

}

int main(){
	splitNumber(1234567894);
	sum(0,9);
	return 0;
}
