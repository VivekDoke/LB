#include "Header.h"

///////////////////////////////////////////////////////////////////////////
//
// Name: SumNonFact
// Description: WAP which accept number from user and return difference 			////			  between summation of all its non factors and non factors
// Input: Integer
// Output: Integer
// Author: Vivek Shrihari Doke
// Date: 02 August 2020		 
//
/////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo) {
	int iCnt = 0;
	int iSumFactors = 0;
	int iSumNonFactors = 0;
	int iDiff = 0;

	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt=1; iCnt <= iNo; iCnt++) {
		if(iNo % iCnt != 0) {
			iSumNonFactors = iSumNonFactors + iCnt;
		}
	}
	for(iCnt=1; iCnt <=iNo / 2; iCnt++) {	
		if(iNo % iCnt == 0) {
			iSumFactors = iSumFactors + iCnt;
		}
	}
	printf("%d %d\n",iSumFactors, iSumNonFactors);
	iDiff = iSumFactors - iSumNonFactors;
	return iDiff;
}
