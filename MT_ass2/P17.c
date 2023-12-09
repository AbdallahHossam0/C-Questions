/*
 ============================================================================
 Name        : P17.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void xor(int n1, int n2){
	int max = 0;
	for(int i = n1; i <= n2; ++i){
		for(int j = i; j <= n2; ++j){
			if(max < (i ^ j)){
				max = i ^ j;
			}
		}
	}
	for(int i = n1; i <= n2; ++i){
		for(int j = i; j <= n2; ++j){
			if(max == (i ^ j)){
				printf("[%d, %d] have max xor value of %d\n", i, j, max);
			}
		}
	}

}

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	int n1, n2;

	printf("Enter num1: ");

	scanf("%d", &n1);

	printf("Enter num2: ");

	scanf("%d", &n2);

	xor(n1, n2);

	return EXIT_SUCCESS;
}
