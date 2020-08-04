#include "Header.h"

/////////////////////////////////////////////////////////////////
//
// Name: SumNonFact
// Description: WAP which accept number from user and display sum of
//			    its non factors
// Input: Integer
// Output: Integer
// Author: Vivek Shrihari Doke
// Date: 02 August 2020		 
//
/////////////////////////////////////////////////////////////////

int SumNonFact(int iNo) {
	int iCnt = 0;
	int iSum = 0;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt=1; iCnt <= iNo; iCnt++) {
		if(iNo % iCnt != 0) {
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}
