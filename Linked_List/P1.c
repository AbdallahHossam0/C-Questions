/*
 ============================================================================
 Name        : P1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node *next;
}Node;


Node* head = NULL;

void insertAtBegin(int data){
	Node* temp = (Node*) malloc(sizeof(Node));
	temp -> next = head;
	temp -> data = data;
	head = temp;
}

void insertAtIndex(int data, int index){
	if(index == 0){
		insertAtBegin(data);
		return;
	}
	Node* n = (Node*) malloc(sizeof(Node));
	n -> next = NULL;
	n -> data = data;

	Node* temp = head;

	for(int i = 0; i < index - 1 && temp -> next; ++i, temp = temp -> next);

	n -> next = temp -> next;
	temp -> next = n;
}

void printLinkedList(Node* link){
	printf("Print The linked List\n");
	while(link){
		printf("%d ", link -> data);
		link = link -> next;
	}
	printf("\nLinked List is printed\n");
}



void deleteAll(){
	for(; head; head = head -> next){
		free(head);
	}
	printf("Linked List freed ^^\n");
}

void printMiddle(void){
	Node* temp1 = head, *temp2 = head;

	while(temp1 -> next && temp1 -> next -> next){
		temp1 = temp1 -> next -> next;
		temp2 = temp2 -> next;
	}
	printf("The middle node data is %d\n", temp2 -> data);
}


int linkedListSum(Node *temp){
	int sum = 0;
	for(; temp; temp = temp -> next){
		sum += temp -> data;
	}
	return sum;
}


int maxLinkedList(Node *temp){
	int max = 0;
	for(; temp; temp = temp -> next){
		if(max < temp -> data){
			max = temp -> data;
		}
	}
	return max;
}

void deleteItemInLinkedList(int x){
	Node *prev = head;
	Node *cur = prev -> next;
	for(; cur; cur = cur -> next, prev = prev -> next){
		if(cur -> data == x){
			prev -> next = cur -> next;
			free(cur);
			printf("Item deleted successfully ^^\n");
			return;
		}
	}
	printf("Item Not Found\n");
}

int main(void) {

	printLinkedList(head);

	insertAtBegin(60);
	insertAtBegin(5);
	insertAtBegin(23);
	insertAtBegin(50);
	insertAtBegin(10);
	insertAtBegin(3);
	insertAtBegin(11);

	printLinkedList(head);

	insertAtIndex(15, 3);

	printLinkedList(head);

	printMiddle();

	printf("The sum of the linked list is %d\n", linkedListSum(head));

	printf("The max value in the linked list is %d\n", maxLinkedList(head));

	deleteItemInLinkedList(99);

	deleteItemInLinkedList(15);

	printLinkedList(head);

	deleteAll();

	return EXIT_SUCCESS;
}
