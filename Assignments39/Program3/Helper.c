/*
program which returns addition of all element from singly linear  linked list.include <stdlib.h>
*/

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

int AdditionOfDataInNodes(PNODE head) {
	int iTotal = 0;
	while(head != NULL) {
		iTotal = iTotal + head->data;	
		head = head->next;
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
