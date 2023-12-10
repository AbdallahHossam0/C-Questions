/*
 ============================================================================
 Name        : P16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printArr(int *a, int size){
	for(int i = 0; i < size; ++i){
		printf("%d\t", a[i]);
	}
	printf("\n");
}


void swapE(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void swapA(int *arr, int size){

	for(int i = 0; i < size >> 1; ++i){
		swapE(arr + i, arr - 1 - i + size);
	}
}

int main(void) {

	int x[] = {1, 3, 5, 7, 9};

	printArr(x, 5);

	swapA(x, 5);

	printArr(x, 5);

	return EXIT_SUCCESS;
}
