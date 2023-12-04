/*
 ============================================================================
 Name        : MT_ass1_18.c
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

	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < i + 1; ++j){
			printf("* ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
