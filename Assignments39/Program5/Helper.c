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

int MinimumDataNode(PNODE head) {
	int minData = head->data;
	while(head != NULL) {
		if(head->data < minData) {
			minData = head->data;
		}
		head = head->next;
	}
	return minData;
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d |-->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
