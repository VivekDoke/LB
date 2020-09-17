#include "Header.h"

void InsertFirst(PPNODE head, PPNODE tail, int value) {	
	PNODE newNode = NULL;

	newNode = (PNODE) malloc(sizeof(NODE));
	newNode->next = NULL;
	newNode->prev = NULL;	
	newNode->data = value;

	if((*head == NULL) && (*tail == NULL)) {
		*head = newNode;
		*tail = newNode;
	}
	else {
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = (*head)->prev;
	}
	(*tail)->next = *head;
	(*head)->prev = *tail;
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
	if(pos == 0) {
		InsertFirst(head, tail, value);
	}
	else if(pos == iCount-1) {
		InsertLast(head, tail, value);
	}
	else {
		PNODE traverse = NULL, current = NULL;
		PNODE newNode = (PNODE) malloc(sizeof(NODE));
		for(traverse = *head; pos-2 > 0; --pos) {
			current = traverse;
			traverse = traverse->next;
		}
		current->next = traverse->next;
		traverse->next->prev = current;
		free(traverse);
		traverse = NULL; 
	}
}

void DeleteFirst(PPNODE head, PPNODE tail) {
	PNODE temp = NULL;
	temp = *head;
	*head = (*head)->next;
	(*head)->prev = *tail;
	(*tail)->next = *head;
	free(temp);
}

void DeleteLast(PPNODE head, PPNODE tail) {
	int iCount = Count(*head);
	PNODE current = *head, previous;
	if (current->next == current) { 
        *head = NULL; 
        return; 
    } 
  
    while (current->next != *head) { 
        previous = current; 
        current = current->next; 
    } 
  
    previous->next = current->next; 
    *head = previous->next;
	*tail = previous; 
    free(current);	
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
		int i=0;
		PNODE temp = *head, prev;
		while(i < pos) {
			prev = temp;
			temp = temp->next;
			i++;
		}
		prev->next = temp->next;
		temp->next->prev = prev;
		free(temp);
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
