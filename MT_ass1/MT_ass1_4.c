/*
 ============================================================================
 Name        : MT_ass1_4.c
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

	float pi = 3.14;

	float r;

	printf("Enter the radius: ");
	scanf("%f", &r);

	printf("Area = %.2f\nCircumference = %.2f", r * pi * r, 2 * pi * r);



	return EXIT_SUCCESS;
}
