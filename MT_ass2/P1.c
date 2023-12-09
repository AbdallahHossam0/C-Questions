/*
 ============================================================================
 Name        : P1.c
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

	char c;
	printf("Enter the char: ");

	scanf("%c", &c);

	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
		printf("alphabetic");
	}
	else{
		printf("non-alphabetic");
	}

	return EXIT_SUCCESS;
}
