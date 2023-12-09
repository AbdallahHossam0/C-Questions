/*
 ============================================================================
 Name        : P11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pow2(int n){
	return ((n > 0) && !((n & (n - 1)))) ? 1 : 0;
}

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	unsigned int x;
	printf("Enter the number: ");

	scanf("%i", &x);

	printf("%s", (pow2(x)) ? "Yes" : "NO");


	return EXIT_SUCCESS;
}
