/*
program which returns addition of all element from singly linear  linked list.include <stdlib.h>
*/

#include "Header.h"
#include<stdlib.h>

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

int MaximumDataNode(PNODE head) {
	int maxData = head->data;
	while(head != NULL) {
		if(head->data > maxData) {
			maxData = head->data;
		}
		head = head->next;
	}
	return maxData;
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d |-->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
