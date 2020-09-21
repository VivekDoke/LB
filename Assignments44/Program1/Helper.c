#include "Header.h"

/* Write a recursive program which display below pattern
	
   Output: * * * * *
*/
void Display() {
	static int i =0;
	if(i<=4) {
		printf("* ");
		i++;
		Display();
	}
}
