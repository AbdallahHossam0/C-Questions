/*
 * queue.c
 *
 *  Created on: Dec 24, 2023
 *      Author: abdal
 */

#include <stdio.h>
#include "queue.h"

#define QUEUE_SIZE 5

static int queue[QUEUE_SIZE];
static int front = 0;
static int rear = 0;
static int Empty = 1;

int isFull(void){
	if(rear == front && !Empty){
		return 1;
	}
	return 0;
}

int isEmpty(void){
	return Empty;
}

void enqueue(int x){
	if(isFull()){
		return;
	}
	if(isEmpty()){
		Empty = 0;
	}

	queue[rear] = x;

	rear = (rear + 1) % QUEUE_SIZE;
}
int dequeue(void){
	if(isEmpty()){
		return -1;
	}
	int ret = queue[front];

	front = (front + 1) % QUEUE_SIZE;
	if(front == rear){
		Empty = 1;
	}
	return ret;
}

void printAllQueue(void){
	if(isEmpty()){
		return;
	}
	printf("All data in the queue is\n");
	int flag = 0;
	for (int i = front; flag == 0 || i != rear; i = (i + 1) % QUEUE_SIZE) {
		printf("%d\t", queue[i]);
		flag = 1;
	}

	printf("\n----------------------------------\n");
}
