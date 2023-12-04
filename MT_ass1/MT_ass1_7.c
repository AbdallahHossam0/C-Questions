/*
 ============================================================================
 Name        : MT_ass1_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int num1, num2, num3;

	printf("Please, Enter the first number: ");
	scanf("%d", &num1);
	printf("Please, Enter the second number: ");
	scanf("%d", &num2);
	printf("Please, Enter the third number: ");
	scanf("%d", &num3);

	printf("The min number = %d", MIN(MIN(num1, num3), num3));


	return EXIT_SUCCESS;
}
