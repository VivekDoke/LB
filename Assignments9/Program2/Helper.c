#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and print 
//			    number till that number
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

void Display(int iNo) {
	int iCnt = 0;
	for(iCnt=1; iCnt <= iNo; iCnt++) {
		printf("%d ",iCnt);
	}
	printf("\n");
}
