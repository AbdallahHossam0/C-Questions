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

int sum(int arr[], int size){
	int sum = 0;
	for(int i = 0; i < size; ++i){
		sum += *(arr + i);
	}
	return sum;
}

#define SIZE(a) (sizeof(a) / sizeof(*a))

int main(void) {

	int arr[] = {5, 3, 9, 12, 25};

	printf("The summation is %d", sum(arr, SIZE(arr)));

	return EXIT_SUCCESS;
}
