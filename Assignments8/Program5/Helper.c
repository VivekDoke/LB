#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: TableRev
// Description: WAP which accept number from user and print
//				its table in reverse order..
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

void TableRev(int iNo) {
	int iCnt = 0;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for(iCnt=10; iCnt > 0; --iCnt) {
		printf("%d\n", iNo*iCnt);
	}
}
