#include "Header.h"

int main() {
	PNODE node = NULL;
	insertHead(&node, 11);
	insertHead(&node, 28);
	insertHead(&node, 17);
	insertHead(&node, 41);	
	insertHead(&node, 6);
	insertHead(&node, 89);
	insertHead(&node, 10);

	Display(node);

	BOOL bRes = FALSE;

	PNODE temp = node;
	while(temp != NULL) { 
		bRes = DisplayPerfect(temp->data);
		if(bRes == TRUE) {
			printf("Perfect number: %d\n", temp->data);
		}
		temp = temp->next;
	}
	return 0;
}
