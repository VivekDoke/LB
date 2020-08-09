#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

void Display(int iNo) {
	if(iNo < 0) {
		iNo = -iNo;
	}

	int iCnt = 0;
	while(iCnt < iNo*2) {
		if(iCnt < iNo) {
			printf("* ");
		}
		else {
			printf("# ");
		}
		++iCnt;
	}
	printf("\n");
}
