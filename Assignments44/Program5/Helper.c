#include "Header.h"

/* Write a recursive program which display below pattern
	
   Output: A B C D E F
*/
void Display() {
	char alpha = 97;
	static int i = 0;
	if(i<=5) {
		printf("%c ", alpha+i);
		i++;
		Display();
	}
}
