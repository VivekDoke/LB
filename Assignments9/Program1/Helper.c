#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Pattern
// Description: WAP which accept number from user and print 
//				that much number of $ and *
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo) {
	int iCnt = 0;
	while(iCnt < iNo) {
		printf("$ * ");
		iCnt++;
	}
	printf("\n");
}
