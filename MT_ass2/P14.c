/*
 ============================================================================
 Name        : P14.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fib(int x){
	if(x == 0 || x== 1){
		return x;
	}
	else{
		return fib(x - 1) + fib(x - 2);
	}
}

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int x;
	printf("Enter the number: ");

	scanf("%d", &x);

	for(int i = 0; i < x; ++i){
		printf("%d\t", fib(i));
	}
	return EXIT_SUCCESS;
}
