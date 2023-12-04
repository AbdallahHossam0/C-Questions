/*
 ============================================================================
 Name        : MT_ass1_5.c
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

	printf("Enter a char ");
	scanf("%c", &c);

	printf("The ascii code is: %i", c);

	return EXIT_SUCCESS;
}
