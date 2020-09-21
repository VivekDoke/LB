#include "Header.h"

/* Write a recursive program which display below pattern
	
   Output: 5 4 3 2 1
*/

void Display() {
	static int i = 5;
	if(i > 0) {
		printf("%d ",i);
		i--;
		Display();
	}
}
