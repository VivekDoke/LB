#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: 5
// Output: A B C D E
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo) {
	int iCnt = 0;
	int iAlpha = 65;
	if(iNo < 0) {
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt<=iNo; iCnt++) {
		printf("%c ",iAlpha++);
	}
	printf("\n");
}
