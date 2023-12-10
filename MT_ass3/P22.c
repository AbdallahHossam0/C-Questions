/*
 ============================================================================
 Name        : P22.c
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

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new){
	if(n_old == 0){
		return 0;
	}

	arr_new[0] = arr_old[0];
	*n_new = 1;
	for(int i = 1; i < n_old; ++i){
		if(arr_old[i] == arr_new[*n_new - 1]){
			continue;
		}
		else{
			arr_new[*n_new] = arr_old[i];
			++(*n_new);
		}
	}
	return 1;
}

int main(void) {
	int arr1[10] = {1,2,3,3,3,4,4,5,5,5};
	int arr2[10];

	int size1 = 10;
	int size2;

	printArr(arr1, size1);
	printArr(arr2, size1);

	int ret = removeDuplicates(arr1, size1, arr2, &size2);

	printArr(arr2, size2);

	printf("the return is %d", ret);

	return EXIT_SUCCESS;
}
