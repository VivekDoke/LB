#include "Header.h"

/* Write a recursive program which accept number from
user and return summation of its digits.

	Input: 879
	Output: 24
*/

int Sum(int iNo) {
	int iDigit = 0;
	int static iSumDigit = 0;
	if(iNo > 0) {
		iDigit = iNo % 10;
		iNo = iNo / 10;
		iSumDigit = iDigit + Sum(iNo);
	}
	return iSumDigit;
}
