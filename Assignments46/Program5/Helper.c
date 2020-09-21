#include "Header.h"

/* Write a recursive program which accept number from
user and return its product of digits.

	Input: 523
	Output: 30
*/

int Mult(int iNo) {
	int static iMult = 1;
	int iDigit = 0;
	if(iNo > 0) {
		iDigit = iNo % 10;
		iNo = iNo / 10;
		iMult = iDigit * Mult(iNo);
	}
	return iMult;
}
