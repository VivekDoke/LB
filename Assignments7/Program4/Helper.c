#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: CountOdd
// Description: WAP which accept number from user and return 
//			    multiplication of all digits.
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 04 August 2020
//
/////////////////////////////////////////////////////////////

int MultDigits(int iNo) {
	int iDigit = 0;
	int iMult = 1;

	if(iNo < 0) {
		iNo = -iNo;	
	}

	while(iNo != 0) {
		iDigit = iNo % 10; 
		iMult = iMult * iDigit;
		iNo = iNo / 10;
	}
	return iMult;
}
