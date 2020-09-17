#include "Header.h"

int main() {
	PNODE node = NULL;
	insertHead(&node, 11);
	insertHead(&node, 28);
	insertHead(&node, 17);
	insertHead(&node, 41);	
	insertHead(&node, 6);
	insertHead(&node, 89);
	insertHead(&node, 141);

	Display(node);
	
	DisplayPallindromeNum(node);
	return 0;
}
