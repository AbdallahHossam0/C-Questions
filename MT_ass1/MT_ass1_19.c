/*
 ============================================================================
 Name        : MT_ass1_19.c
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

	for(int i = 5; i > 0; --i){
		for(int j = i; j > 0; --j){
			printf("* ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
