/*
 ============================================================================
 Name        : P18.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE(a) ((sizeof(a)) / (sizeof(*a)))

int main(void) {

	int a[] = {3,3,3,3,3,3,1,2,2,3,3,3,4,4,4,4,3,3,3,3,3};

	int max = 0;
	int num = 0;

	int temp = 1;

	for(int i = 1; i < SIZE(a); ++i){
		if(a[i] == a[i - 1]){
			++temp;
		}
		else{
			if(temp > max){
				max = temp;
				num = a[i - 1];
			}
			temp = 1;
		}
		if(i == SIZE(a) - 1){
			if(temp > max){
				max = temp;
				num = a[i];
			}
		}
	}

	printf("The number is %d and it has been repeated %d times", num, max);

	return EXIT_SUCCESS;
}
