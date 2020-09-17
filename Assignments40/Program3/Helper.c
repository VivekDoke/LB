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

int AdditionEven(PNODE head) {
	PNODE temp = head;
	int iTotal = 0;
	while(temp != NULL) {
		if(temp->data % 2 == 0) {
			iTotal = iTotal + temp->data;
		}
		temp = temp->next;
	}
	return iTotal;
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d |-->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
