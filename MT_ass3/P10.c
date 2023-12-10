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
#include <ctype.h>


void convertToLower(char* s){
	while(*s){
		if(isalpha(*s))
			*s |= 0b00100000;
		++s;
	}
}

int main(void) {

	char str[] = "Hello, My name is Abdallah ^^";

	convertToLower(str);

	printf("new string is %s", str);

	return EXIT_SUCCESS;
}
