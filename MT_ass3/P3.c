/*
 ============================================================================
 Name        : P3.c
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
	int flag = 1;
	for(int i = 0; i < size - 1; ++i){
		flag = 1;
		for(int j = 1; j < size - i; ++j){
			if(*(a + j - 1) > *(a + j)){
				swap(a + j - 1, a + j);
				flag = 0;
			}
		}
		if(flag){
			break;
		}
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
