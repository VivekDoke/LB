#include "Header.h"

/* Write a recursive program which display below pattern
	
   Output: 1 2 3 4 5
*/
void Display() {
	static int i = 1;
	if(i<=5) {
		printf("%d ",i);
		i++;
		Display();
	}
}
