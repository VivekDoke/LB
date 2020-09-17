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

void DisplayProduct(PNODE head) {
	PNODE current = head;
	while(current != NULL) {
		int iMulDigit = 1, iDigit = 0;
		int data = current->data;
		while (data != 0) {
			iDigit = data % 10;
			if(iDigit) {
				iMulDigit = iMulDigit * iDigit;
			}
			data = data / 10;
		}
		printf("%d\n",iMulDigit);
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
