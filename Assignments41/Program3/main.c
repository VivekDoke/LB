#include "Header.h"

int main() {
	PNODE node = NULL;
	insertHead(&node, 10);
	insertHead(&node, 28);
	insertHead(&node, 17);
	insertHead(&node, 41);	
	insertHead(&node, 6);
	insertHead(&node, 89);
	insertHead(&node, 141);

	Display(node);
	
	DisplayProduct(node);
	return 0;
}
