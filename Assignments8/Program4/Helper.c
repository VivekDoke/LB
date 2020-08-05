#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Table
// Description: WAP which accept number from user and print
//				its table..
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

void Table(int iNo) {
	int iCnt = 0;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt=1; iCnt<11; ++iCnt) {
		printf("%d\n", iNo*iCnt);
	}
}
