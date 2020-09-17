/*Write a program which search first occurrence of 
  particular element from  singly linear linked list.  
  Function should return position at which element is found.*/

#include<stdio.h>

struct Node {
	int data;
	struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void insertHead(PPNODE head, int data);
int AdditionOfDataInNodes(PNODE head);
void Display(PNODE head);
