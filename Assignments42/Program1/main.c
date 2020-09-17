#include "Header.h"

int main() {
	PNODE first = NULL;
	PNODE last = NULL;
	
	int iNo = 0;

	InsertFirst(&first, &last, 10);
	InsertFirst(&first, &last, 20);
	InsertFirst(&first, &last, 30);
	InsertFirst(&first, &last, 40);
	InsertFirst(&first, &last, 50);
	InsertFirst(&first, &last, 60);
	Display(first, last);
	
	InsertLast(&first, &last, 100);
	InsertLast(&first, &last, 200);
	InsertLast(&first, &last, 300);
	InsertLast(&first, &last, 400);
	InsertLast(&first, &last, 500);	
	Display(first, last);

	InsertAtPos(&first, &last, 5000,3);	
	Display(first, last);
	
	DeleteFirst(&first, &last);
	Display(first, last);
	
	DeleteLast(&first, &last);
	Display(first, last);

	DeleteAtPos(&first, &last, 7);
	Display(first, last);

	return 0;
}
