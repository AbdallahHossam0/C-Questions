/*
 ============================================================================
 Name        : MT_ass1_3.c
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

	int c = 32;

	float f = c * 9.0 / 5 + 32;

	printf("Temp in c is %d\nTemp in F is %.1f", c, f);

	return EXIT_SUCCESS;
}
