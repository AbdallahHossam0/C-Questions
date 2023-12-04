/*
 ============================================================================
 Name        : MT_ass1_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	unsigned long num;

	printf("Enter the number ");
	scanf("%lu", &num);

	unsigned int x = sqrt(num);

	if(x * x == num){
		printf("The number is perfect square");
	}
	else{
		printf("The number is not perfect square");
	}

	return EXIT_SUCCESS;
}
