#include "Header.h"

/* Write a recursive program which accept string from user and returns its reverse number.

	Input: 87924
	Output: 42978
*/

int Reverse(int iNo) {
	if(iNo < 0) {
		iNo = -iNo;
	}
	static int iSum = 0;
	if(iNo > 0) {
		int iDigit = iNo % 10;
		iSum = (iSum*10) + iDigit;
		Reverse(iNo/10);
	}
	else {
		return iSum;
	}
	return iSum;
}
