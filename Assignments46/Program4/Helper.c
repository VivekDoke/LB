#include "Header.h"

/* Write a recursive program which accept number from
user and return its factorial..

	Input: 5
	Output: 120
*/

int Fact(int iNo) {
	int static iFact = 1;
	if(iNo > 0) {
		iFact = iFact*iNo;
		iNo--;
		Fact(iNo);	
	}
	return iFact;
}
