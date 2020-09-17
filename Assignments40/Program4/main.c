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

	int iRes = SecMaximum(node);

	printf("Second maximum number: %d\n", iRes);
	return 0;
}
