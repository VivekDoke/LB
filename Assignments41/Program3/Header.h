/*
Write a program which display product of all element from singly linear linked list (Don't consider 0).
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

struct Node {
	int data;
	struct Node *next;
};

typedef int BOOL;

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void insertHead(PPNODE head, int data);
void DisplayProduct(PNODE head);
void Display(PNODE head);
