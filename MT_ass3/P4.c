/*
 ============================================================================
 Name        : P4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

void iSort(int *a, int size){
	int temp;
	int j;
	for(int i = 1; i < size; ++i){
		temp = a[i];

		for(j = i; j >= 0 && temp < a[j - 1]; j--){
			a[j] = a[j - 1];
		}
		a[j] = temp;
	}

}

void printArr(int *a, int size){
	for(int i = 0; i < size; ++i){
		printf("%d\t", a[i]);
	}
	printf("\n");
}

#define SIZE(a) ((sizeof(a)) / (sizeof(*a)))

int main(void) {
	int arr[] = {12, 13, 9, 6, 8, 10, 4, 1, 2};

	printArr(arr, SIZE(arr));

	iSort(arr, SIZE(arr));

	printArr(arr, SIZE(arr));

	return EXIT_SUCCESS;
}
