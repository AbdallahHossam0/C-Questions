/*
 ============================================================================
 Name        : P7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

typedef void(*funcPtr)(int *x, int *y);

int main(void) {
	funcPtr swapPtr = swap;

	int x = 15;
	int y = 36;

	printf("x = %d, y = %d\n", x, y);

	swapPtr(&x, &y);

	printf("x = %d, y = %d\n", x, y);

	return EXIT_SUCCESS;
}
