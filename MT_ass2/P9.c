/*
 ============================================================================
 Name        : P9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap_1(int *i, int *j){
	int temp = *i;
	*i = *j;
	*j = temp;
}

void swap_2(int *i, int *j){
	*i = *i + *j;
	*j = *i - *j;
	*i = *i - *j;

}

void swap_3(int *i, int *j){
	*i = *i ^ *j;
	*j = *i ^ *j;
	*i = *i ^ *j;
}

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	int n1, n2;

	printf("Enter num1: ");

	scanf("%d", &n1);

	printf("Enter num2: ");

	scanf("%d", &n2);

	swap_1(&n1, &n2);

	printf("Number after swap = %d, %d\n", n1, n2);
	swap_2(&n1, &n2);
	printf("Number after swap = %d, %d\n", n1, n2);
	swap_3(&n1, &n2);
	printf("Number after swap = %d, %d\n", n1, n2);

	return EXIT_SUCCESS;
}
