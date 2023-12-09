/*
 ============================================================================
 Name        : P6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void convertToUpper(char* c){
	*c &= 0b11011111;
}


int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	char c;
	printf("Enter the char: ");

	scanf("%c", &c);

	convertToUpper(&c);

	printf("New char is %c", c);


	return EXIT_SUCCESS;
}
