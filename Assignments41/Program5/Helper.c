/*
WAP which display largest digits of all element from singly linked list.
*/

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

void DisplayLargestDigit(PNODE head) {
	PNODE current = head;
	while(current != NULL) {
		int iLarge = 0, iDigit = 0, itemp=0;
		int data = current->data;
		while (data != 0) {
			iDigit = data % 10;
			if(itemp == 0) {
				iLarge = iDigit;
			}
			if(iDigit > iLarge) {
				iLarge = iDigit;
			} 
			data = data / 10;
			itemp++;
		}
		printf("%d\n",iLarge);
		current = current->next;
	}
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d |-->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
