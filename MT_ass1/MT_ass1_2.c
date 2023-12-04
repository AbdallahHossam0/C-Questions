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

	printf("My name is: %s\nMy grade is: %s", "Abdallah", "Very good");

	return 0;
}
