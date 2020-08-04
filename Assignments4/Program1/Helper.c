#include "Header.h"

/////////////////////////////////////////////////////////////////
//
// Name: MultFact
// Description: WAP which accept number from user and display its
//				multiplication of factors
// Input: Integer
// Output: Integer
// Author: Vivek Shrihari Doke
// Date: 01 August 2020		 
//
/////////////////////////////////////////////////////////////////

int MultFact(int iNo) {
	int iCnt = 0;
	int iMult = 1;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt=1; iCnt <= iNo/2; iCnt++) {
		if(iNo % iCnt == 0) {
			iMult = iMult*iCnt;
		}
	}
	return iMult;
}
