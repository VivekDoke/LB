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

BOOL DisplayPrime(int idata) {
	int data = idata;
	int i = 0, iSum = 0;
	for(i = 1; i < (data/2); i++) {
		if(data % i == 0) {
			data = data / i;
			iSum = iSum + data;
		}
	}
	if(iSum == idata) {
		return TRUE;
	}
	return FALSE;
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d |-->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}
