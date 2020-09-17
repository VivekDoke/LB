#include<stdio.h>
#include<stdlib.h>

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

struct Node {
	int data;
	struct Node *next;
};

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

void insertLast(PPNODE head, int data) {
	PNODE newNode = NULL;
	newNode = (PNODE) malloc(sizeof(PNODE));

	newNode->data = data;
	newNode->next = NULL;

	if(*head == NULL) {
		*head = newNode;
	}
	else {
		PNODE temp = NULL;
		temp = *head;
		while(temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void insertAtMiddle(PPNODE head, int location, int data) {
	int iCount = 0;
	PNODE newNode = NULL;
	newNode = (PNODE) malloc(sizeof(PNODE));

	newNode->data = data;
	newNode->next = NULL;

	if(*head == NULL) {
		*head = newNode;
	}
	else {
		PNODE temp = *head;
		while(iCount < location) {
			temp = temp->next;
			iCount++;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
}

void InsertAtPos(PPNODE head, int value, int pos) {
	int size = 0;
	size = Count(*head);
	if((pos < 1) || (pos > size+1)) {
		return;
	}
	if(pos == 1) {
		insertHead(head, value);
	}
	if(pos == size+1) {
		insertLast(head, value);
	}
	else {
		insertAtMiddle(head, value, pos);	
	}
}

void DeleteFirstNode(PPNODE head) {
	PNODE temp = *head;
	if(*head == NULL) {
		return;
	}

	if(*head != NULL) {
		*head = (*head)->next;
		free(temp);
	}
}

void Display(PNODE head) {
	while(head != NULL) {
		printf("| %d | --> ", head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int Count(PNODE head) {
	int iCount = 0;
	while(head != NULL) {
		head = head->next;
		iCount++;
	}
	return iCount;
}

int firstOccurence(PNODE head,int data) {
	int iCount = 0;
	while(head != NULL) {
		if(head->data == data) {
			return iCount;
		}
		head = head->next;
		iCount++;
	}
}

int LastOccurence(PNODE head,int data) {
	int iCount = 0;
	int temp = 0;
	while(head != NULL) {
		if(head->data == data) {
			temp = iCount;
		}
		head = head->next;
		iCount++;
	}
	return temp;
}

void DeleteNode(PNODE first, int data) {
		

}

int main() {
	PNODE first = NULL;
	insertHead(&first, 11);
	insertHead(&first, 22);
	insertHead(&first, 33);
	insertHead(&first, 44);	
	insertHead(&first, 33);
	insertHead(&first, 66);

	Display(first);
	printf("Count of Node: %d\n", Count(first));

	insertLast(&first, 55);	
	Display(first);
	printf("Count of Node: %d\n", Count(first));

	int iOcc = 0;
	iOcc = firstOccurence(first, 33);
	printf("First occurence of 33 is at: %d\n", iOcc);

	DeleteFirstNode(&first);
	Display(first);
	
	insertAtMiddle(&first, 2, 100);
	Display(first);
	
	int iLastOcc = 0;
	iLastOcc = LastOccurence(first, 33);
	printf("Last occurence of 33 is at: %d\n", iLastOcc);
	return 0;
}