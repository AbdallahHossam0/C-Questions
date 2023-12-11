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

void swap(unsigned int *x){
	unsigned int y = *x >> 16;
	y |= *x << 16;
	*x = y;
}

int main(void) {

	unsigned int x = 0xffffaaaa;

	printf("x = %x\n", x);

	swap(&x);

	printf("x = %x\n", x);

	return EXIT_SUCCESS;
}
