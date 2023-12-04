/*
 ============================================================================
 Name        : MT_ass1_6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	int num1;
	int num2;

	printf("Please, Enter the first number: ");
	scanf("%d", &num1);
	printf("Please, Enter the second number: ");
	scanf("%d", &num2);

	if(num1 == num2){
		printf("The numbers are equal");
	}
	else if(num1 > num2){
		printf("num1 > num2");
	}
	else{
		printf("num1 < num2");
	}

	return EXIT_SUCCESS;
}
