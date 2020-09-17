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

	int iMax = 0;
	iMax = MinimumDataNode(node);
	printf("Minimum of data node in list: %d\n", iMax);

	return 0;
}
