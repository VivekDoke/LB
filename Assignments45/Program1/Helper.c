#include "Header.h"

/* Write a recursive program which display below pattern

	Input: 5
	Output: * * * * *
*/
void Display(int iNo) {
	if(iNo > 0) {
		printf("* ");
		iNo--;
		Display(iNo);
	}
}
