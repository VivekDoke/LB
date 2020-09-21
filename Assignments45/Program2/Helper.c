#include "Header.h"

/* Write a recursive program which display below pattern

	Input: 5
	Output: 1 2 3 4 5
*/
void Display(int iNo) {
	int static i = 1;
	if(i <= iNo) {
		printf("%d ", i);
		i++;
		Display(iNo);
	}
}
