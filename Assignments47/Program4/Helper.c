#include "Header.h"

/* Write a recursive program which accept string from user and returns smallest digit.

	Input: 87924
	Output: 2
*/

int minDigit(int iNo) {
	if(iNo < 0) {
		iNo = -iNo;
	}
	if(iNo > 0) {
		int iDigit = iNo % 10;
		int iMin = minDigit(iNo / 10);
		return (iDigit < iMin ? iDigit : iMin);
	}
	else {
		return 9;
	}
}
