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

BOOL IsCheckPallindromeNum(int iNum) {
	int iRem = 0, iNo = 0, iNew = 0;
	iNo = iNum;
	while(iNo != 0) {
		iRem = iNo % 10;
		iNew = iNew * 10 + iRem;
		iNo = iNo / 10;
	}
	if(iNew == iNum) {
		return TRUE;
	}
	return FALSE;
}

void DisplayPallindromeNum(PNODE head) {
	PNODE current = head;
	while(current != NULL) {
		if(IsCheckPallindromeNum(current->data)) {
			printf("%d\n", current->data);
		}
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
