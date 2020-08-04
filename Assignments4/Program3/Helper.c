#include "Header.h"

/////////////////////////////////////////////////////////////////
//
// Name: NonFact
// Description: WAP which accept number from user and display all
//			    its non factors
// Input: Integer
// Output: void
// Author: Vivek Shrihari Doke
// Date: 02 August 2020		 
//
/////////////////////////////////////////////////////////////////

void NonFact(int iNo) {
	int iCnt = 0;
	int iMult = 1;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt=1; iCnt <= iNo; iCnt++) {
		if(iNo % iCnt != 0) {
			printf("%d\n",iCnt);
		}
	}
}
