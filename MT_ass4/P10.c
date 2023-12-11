/*
 ============================================================================
 Name        : P10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef int* intptr;

void swap(intptr* x, intptr* y){
	intptr temp = *x;
	*x = *y;
	*y = temp;
}

int main(void) {

	int x = 10;
	int y = 15;

	int *ptrX = &x;
	int *ptrY = &y;

	printf("x = %p, y = %p\n", ptrX, ptrY);

	swap(&ptrX, &ptrY);

	printf("x = %p, y = %p\n", ptrX, ptrY);

	return EXIT_SUCCESS;
}
