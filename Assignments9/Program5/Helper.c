#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: MultipleDisplay
// Description: WAP which accept N from user and print 
//			    multiples of five N
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo) {
	int iCnt = 0;
	for(iCnt=1; iCnt <= 5; iCnt++) {
		printf("%d ",iCnt*iNo);
	}
	printf("\n");
}
