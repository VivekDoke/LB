#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: CountOdd
// Description: WAP which accept number from user and return 
//			    the count of digits between 3 and 7.
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 04 August 2020
//
/////////////////////////////////////////////////////////////

int CountRange(int iNo) {
	int iDigit = 0;
	int iCnt = 0;

	if(iNo < 0) {
		iNo = -iNo;	
	}

	while(iNo != 0) {
		iDigit = iNo % 10; 
		if(iDigit > 3 && iDigit < 7) {
			iCnt++;
		}	
		iNo = iNo / 10;
	}
	return iCnt;
}
