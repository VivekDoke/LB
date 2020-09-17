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

	int iTotal = 0;
	iTotal = AdditionOfDataInNodes(node);
	printf("Total of data in list: %d\n", iTotal);

	return 0;
}
