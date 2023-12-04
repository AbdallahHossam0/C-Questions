/*
 ============================================================================
 Name        : MT_ass1_9.c
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

	int num;
	int num2 = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	while(num){
		num2 = num2 * 10 + num % 10;
		num /= 10;
	}
	printf("The new number is: %d", num2);
	return EXIT_SUCCESS;
}
