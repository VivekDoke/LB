#include "Header.h"

int main() {
	PNODE node = NULL;
	insertHead(&node, 70);
	insertHead(&node, 60);
	insertHead(&node, 50);
	insertHead(&node, 40);	
	insertHead(&node, 30);
	insertHead(&node, 20);
	insertHead(&node, 10);

	Display(node);

	int iOcc = 0;
	iOcc = SearchFirstOccurence(node, 30);
	printf("First occurence of 30 is at: %d\n", iOcc);

	return 0;
}
