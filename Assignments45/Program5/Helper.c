#include "Header.h"

/* Write a recursive program which display below pattern

	Input: 6
	Output: a b c d e f
*/

void Display(int iNo) {
	char alpha = 97;
	static int i = 0; 
	if(i < iNo) {
		printf("%c ", alpha+i);
		i++;
		Display(iNo);
	}
}
