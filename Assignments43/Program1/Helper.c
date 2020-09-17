#include "Header.h"

void InsertFirst(PPNODE head, PPNODE tail, int value) {	
	PNODE newNode = NULL;

	newNode = (PNODE) malloc(sizeof(NODE));
	newNode->next = NULL;
	newNode->data = value;

	if((*head == NULL) && (*tail == NULL)) {
		*head = newNode;
		*tail = newNode;
	}
	else {
		newNode->next = *head;
		*head = newNode;
	}
	(*tail)->next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int value) {
	PNODE newNode = NULL;

	newNode = (PNODE) malloc(sizeof(NODE));
	newNode->data = value;
	newNode->next = NULL;

	if((*head == NULL) && (*tail == NULL)) {
		*head = newNode;
		*tail = newNode;
	}
	else {
		(*tail)->next = newNode;
		*tail = (*tail)->next;
	}
	(*tail)->next = *head;
}

void InsertAtPos(PPNODE head, PPNODE tail, int value, int pos) {
	int iCount = Count(*head);
	if((pos < 0) || (pos > iCount)) {
		printf("PRINT\n");
		return;
	}
	if(pos == 0) {
		InsertFirst(head, tail, value);
	}
	else if(pos == iCount) {
		printf("IN LAST\n");
		InsertLast(head, tail, value);
	}
	else {
		PNODE traverse = NULL;
		PNODE newNode = (PNODE) malloc(sizeof(NODE));
		newNode->data = value;
		newNode->next = NULL;

		for(traverse = *head; pos-2 > 0; traverse = traverse->next, --pos);
		newNode->next = traverse->next->next;
		traverse->next = newNode;
	}
}

void DeleteFirst(PPNODE head, PPNODE tail) {
	PNODE temp = *head;
	if(temp == NULL) {
		return;
	}
	*head = temp->next;
	(*tail)->next = *head;
	free(temp);
	temp = NULL;
}

void DeleteLast(PPNODE head, PPNODE tail) {
	PNODE traverse = *head, prev = NULL;
	while(traverse != *tail) {
		prev = traverse;
		traverse = traverse->next;
	}
	prev->next = *head;
	*tail = prev;
	free(traverse);
	traverse = NULL;
}

void DeleteAtPos(PPNODE head, PPNODE tail, int pos) {
	int iCount = Count(*head);
	if(pos == 0) {
		DeleteFirst(head, tail);
	}
	else if(pos == iCount-1) {
		DeleteLast(head, tail);
	}
	else {
		int iCnt = 0;
		PNODE traverse = *head, current = NULL;
		while(iCnt < pos) {
			current = traverse;
			traverse = traverse->next;
			iCnt++;
		}
		current->next = traverse->next;
		free(traverse);
		traverse = NULL;
	}
}

int Count(PNODE head) {
	int iCount = 0;
	if(head == NULL) {
		return iCount;
	}
	PNODE curr = head;
	do {
		iCount++;
		curr = curr->next;
	} while(curr != head);
	return iCount;
}

void Display(PNODE head, PNODE tail) {
	if((head == NULL) && (tail == NULL)) {
		return;
	}
	do {
		printf("| %d |-->",head->data);
		head = head->next;
	} while(head != tail->next);
	printf("\n--------------------------------\n");
}
