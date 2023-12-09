/*
 ============================================================================
 Name        : P8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char isPrime(int n){
	if(n == 0 || n == 1){
		return 0;
	}
	for(int i = 2; i < (n >> 1) + 1; ++i){
		if((n % i) == 0){
			return 0;
		}
	}
	return 1;
}

void printPrimeBetween(int n1, int n2){
	for(int i = n1; i < n2 + 1; ++i){
		if(isPrime(i)){
			printf("%d\t", i);
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

	printPrimeBetween(n1, n2);


	return EXIT_SUCCESS;
}
