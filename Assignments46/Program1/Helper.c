#include "Header.h"

/* Write a recursive program which display below pattern

	Input: 5
	Output: 5 * 4 * 3 * 2 * 1 *
*/
void Display(int iNo) {
	if(iNo > 0) {
		printf("%d * ", iNo);
		iNo--;
		Display(iNo);
	}
}
