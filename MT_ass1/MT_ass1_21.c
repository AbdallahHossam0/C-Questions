/*
 ============================================================================
 Name        : MT_ass1_21.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < 5; ++j){
			if(i == j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(int j = 5; j >= 0; --j){
			if(i == j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	for(int i = 4; i >= 0; --i){
		for(int j = 0; j < 5; ++j){
			if(i == j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		for(int j = 5; j >= 0; --j){
			if(i == j){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
