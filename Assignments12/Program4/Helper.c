#include "Header.h"

/////////////////////////////////////////////////////////////
// Name: OddFactorial
// Description: WAP to find the odd factorial of given no. 
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
///////////////////////////////////////////////////////////

int OddFactorial(int iNo) {
	int iRes = 1, iCnt = 0;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt = 2; iCnt <= iNo; iCnt++) {
		if(iCnt % 2 != 0)	
			iRes = iRes * iCnt;
	}
	return iRes;
}
