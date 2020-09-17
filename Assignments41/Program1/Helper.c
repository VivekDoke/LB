/*Write a program which search first occurrence of particular element from  singly linear linked list.  
  Function should return position at which element is found.*/
#include <stdlib.h>
#include "Header.h"

void insertHead(PPNODE head, int data) {
	PNODE newNode = NULL;
	newNode = (PNODE) malloc(sizeof(PNODE));

	newNode->data = data;
	newNode->next = NULL;

	if(*head == NULL) {
		*head = newNode;
	}
	else {
		newNode->next = *head;
		*head = newNode;
	}
}

void Reverse(PPNODE head) {
	PNODE current = *head;
	PNODE prev = NULL;
	PNODE next = NULL;
	while(current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d |-->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
