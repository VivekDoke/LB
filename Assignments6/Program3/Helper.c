#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: CountTwo
// Description: WAP which accept number from user and count
//				frequency of 2 in it.
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 04 August 2020
//
/////////////////////////////////////////////////////////////

int CountTwo(int iNo) {
	int iDigit = 0;
	int iCnt = 0;
	if(iNo < 0) {
		iNo = -iNo;	
	}

	while(iNo != 0) {
		iDigit = iNo % 10; 
		if(iDigit == 2) {
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}
