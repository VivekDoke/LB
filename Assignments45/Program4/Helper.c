#include "Header.h"

/* Write a recursive program which display below pattern

	Input: 6
	Output: A B C D E F
*/

void Display(int iNo) {
	char alpha = 65;
	static int i = 0; 
	if(i < iNo) {
		printf("%c ", alpha+i);
		i++;
		Display(iNo);
	}
}
