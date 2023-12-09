/*
 ============================================================================
 Name        : P10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned  int getHolesNumber(unsigned int x){


	unsigned char a[] = {1, 0, 0, 0, 1, 0, 1, 0, 2, 1};
	int ret = 0;
	while(x){
		ret += a[x % 10];
		x /= 10;
	}
	return ret;
}

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	unsigned int x;
	printf("Enter the number: ");

	scanf("%i", &x);


	printf("The number of holes is %u", getHolesNumber(x));

	return EXIT_SUCCESS;
}
