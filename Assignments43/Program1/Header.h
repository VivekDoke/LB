#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int value);
void InsertLast(PPNODE head, PPNODE tail, int value);
void InsertAtPos(PPNODE head, PPNODE tail, int value, int pos);
void DeleteFirst(PPNODE head, PPNODE tail);
void DeleteLast(PPNODE head, PPNODE tail);
void DeleteAtPos(PPNODE head, PPNODE tail, int pos);

void Display(PNODE head, PNODE tail);
int Count(PNODE head);
