#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: DisplayOdd
// Description: WAP which accept number from user and print 
//			    odd numberd till the given number
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

void DisplayOdd(int iNo) {
	int iCnt = 0;
	for(iCnt=1; iCnt <= iNo; ) {
		printf("%d ",iCnt);
		iCnt = iCnt + 2; 
	}
	printf("\n");
}
