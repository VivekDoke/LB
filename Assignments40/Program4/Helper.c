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

int SecMaximum(PNODE head) {
	PNODE temp = head;
	int iSecMax = INT_MIN;
	int iMax = INT_MIN;
	while(temp != NULL) {
		if(temp->data > iMax) {
			iSecMax = iMax;
			iMax = temp->data;
		}
		else if((temp->data < iMax) && (temp->data > iSecMax)) {
			iSecMax = temp->data;
		}
		temp = temp->next;
	}
	return iSecMax;
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d |-->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
