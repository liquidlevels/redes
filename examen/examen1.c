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

int *splitNumber(int number){
	//thank chatgpt for the help with this
	int temp = number;

	while(temp != 0){
		temp /= 10;
		counter++;
	}

	for(int i = counter; i <= 0; i--){
		digits[i] = number % 10;
		number /= 10;
	}
	
	for(int i = 0; i < vectorLength; i++){
		printf("[%d]", digits[i]);
	}
	return 0;

}

void esplitNumber(int number){
	int i = vectorLength;
	while(number > 0){
		int split = number % 10;
		printf("split %d\n", split);
		digits[i] = split;
		printf("[%d] ", digits[i]);
		number /= 10;
		i--;
	}
	printf("\n");
	for(int i = 0; i < vectorLength; i++){
		printf("[%d] ", digits[i]);
	}
	printf("\n");
}

void sum(int number, int position, int sumValue){
	int temp = number;
	printf("%d, %d, %d, %d\n", number, position, sumValue, temp);
	while(temp != 0){
		temp /= 10;
		counter++;
	}

	printf("%d, %d, %d\n", counter, temp, number);
	
	for(int i = counter; i <= 0; i--){
		digits[i] = number % 10;
		printf("[%d] ", digits[i]);
		number /= 10;
	}

	for(int i = 0; i < vectorLength; i++){
		printf("[%d] ", digits[i]);
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
	esplitNumber(1234567890);
	//sum(123456789,0,9);
	return 0;
}
