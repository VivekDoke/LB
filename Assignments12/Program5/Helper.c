#include "Header.h"

/////////////////////////////////////////////////////////////
// Name: EvenFactorial
// Description: WAP to find which returns differnce between even factorial and odd factorial of given number. 
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

int FactorialDiff(int iNo) {
	int iSumEven = 1, iSumOdd = 1, iCnt = 0;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt = 2; iCnt <= iNo; iCnt++) {
		if(iCnt % 2 == 0)	
			iSumEven = iSumEven * iCnt;
		else
			iSumOdd = iSumOdd * iCnt;
	}
	return iSumEven - iSumOdd;
}
