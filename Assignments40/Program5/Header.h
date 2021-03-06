/*Write a program which search first occurrence of 
  particular element from  singly linear linked list.  
  Function should return position at which element is found.*/

#include<stdio.h>
#include<limits.h>

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
int SumDigit(int data);
void Display(PNODE head);
