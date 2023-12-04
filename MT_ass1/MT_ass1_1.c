/*
 ============================================================================
 Name        : ass1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL,_IONBF, 0);
	setvbuf(stderr, NULL,_IONBF, 0);

	int num1;
	int num2;
	int ans;
	printf("Please, Enter the first number: ");
	scanf("%d", &num1);
	printf("Please, Enter the second number: ");
	scanf("%d", &num2);
	ans = (num1 + num2) * 3 - 10;
	printf("The answer = %d", ans);

	return 0;
}
