/*
 ============================================================================
 Name        : P12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int find(int *a, int size){
	int i = 0, j, count;
	for(; i < size - 1; ++i){
		count = 0;
		for(j = 0; j < size; ++j){
			if(a[i] == a[j]){
				++count;
			}
		}
		if(count % 2){
			break;
		}
	}
	return a[i];
}

#define SIZE(a) (sizeof(a) / sizeof(*a))

int main(void) {
	int arr[] = {1, 2, 2, 7, 8, 9, 1, 20, 20, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 20};

	printf("The number with odd repetitions is %d", find(arr, SIZE(arr)));

	return EXIT_SUCCESS;
}
