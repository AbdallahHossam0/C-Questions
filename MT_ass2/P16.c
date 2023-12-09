/*
 ============================================================================
 Name        : P16.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned char ones(unsigned char i){
	unsigned char ret = 0;
	for(int j = 0; j < 8; ++j){
		if(i & 0x01){
			++ret;
		}
		i = i >> 1;
	}
	return ret;
}

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	unsigned char x;
	printf("Enter the number: ");

	scanf("%i", &x);

	printf("No. of ones is %i", ones(x));
	return EXIT_SUCCESS;
}
