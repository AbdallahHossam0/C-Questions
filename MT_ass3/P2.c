/*
 ============================================================================
 Name        : P2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int func(char *arr){
	int i = 0;
	int j = 0;
	while(arr[i]){
		j = i + 1;
		while(arr[j]){
			if(arr[i] == arr[j]){
				return 0;
			}
			j++;
		}
		i++;
	}
	return 1;
}

int main(void) {
	char arr[] = "Hello";
	printf("%d", func(arr));
	return EXIT_SUCCESS;
}
