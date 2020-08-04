#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: CountDiff
// Description: WAP which accept number from user and return 
//			    difference between summation of even digits
//				and summation of odd digits.
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 04 August 2020
//
/////////////////////////////////////////////////////////////

int CountDiff(int iNo) {
	int iDigit = 0;
	int iSumEven = 0;
	int iSumOdd = 0;

	if(iNo < 0) {
		iNo = -iNo;	
	}

	while(iNo != 0) {
		iDigit = iNo % 10;
		if(iDigit % 2 == 0) {
			iSumEven = iSumEven + iDigit;
		}
		else {
			iSumOdd = iSumOdd + iDigit;
		} 
		iNo = iNo / 10;
	}
	return iSumEven - iSumOdd;
}
