#include "Header.h"

/* Write a recursive program which accept string from user and returns largest digit.

	Input: 87924
	Output: 9
*/

int maxDigit(int iNo) {
	if(iNo < 0) {
		iNo = -iNo;
	}
	if(iNo > 0) {
		int iDigit = iNo % 10;
		int iMax = maxDigit(iNo / 10);
		return (iDigit > iMax ? iDigit : iMax);
	}
	else {
		return 0;
	}
}
