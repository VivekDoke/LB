#include "Header.h"

/////////////////////////////////////////////////////////////////
//
// Name: MultFact
// Description: WAP which accept number from user and display its
//				factors in decreasing order.
// Input: Integer
// Output: Integer
// Author: Vivek Shrihari Doke
// Date: 02 August 2020		 
//
/////////////////////////////////////////////////////////////////

void FactRev(int iNo) {
	int iCnt = 0;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt=iNo/2; iCnt >= 1; iCnt--) {
		if(iNo % iCnt == 0) {
			printf("%d\n",iCnt);
		}
	}
}
