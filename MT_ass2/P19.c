/*
 ============================================================================
 Name        : P19.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int isPowerOf3(int num) {
    return (num > 0) && ((1162261467 % num) == 0);
}

int main() {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);
	int x;
	printf("Enter the number: ");

	scanf("%d", &x);

	printf("the number %d is %s power of 3", x, isPowerOf3(x) ? "a" : "not a");

    return 0;
}
