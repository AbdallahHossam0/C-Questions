/*
 * queue.c
 *
 *  Created on: Dec 24, 2023
 *      Author: abdal
 */


#include <stdio.h>
#include "queue.h"

static int queue[5];
static int size = 0;

void enqueue(int x){
	if(size > 4){
		return;
	}
	queue[size] = x;
	++size;
}

int dequeue(void){
	int ret;
	if(size == 0){
		return -1;
	}
	ret = queue[0];

	for(int i = 0; i < size; i++){
		queue[i] = queue[i + 1];
	}
	--size;
	return ret;
}

void printAllQueue(void){
	printf("All data in the queue is\n");

	for(int i = 0; i < size; ++i){
		printf("%d\t", queue[i]);
	}

	printf("\nAll data in the Array is\n");

	for(int i = 0; i < 5; ++i){
		printf("%d\t", queue[i]);
	}
	printf("\n");

}
