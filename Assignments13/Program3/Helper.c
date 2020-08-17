#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: 5
// Output: 1 * 2 * 3 * 4 * 5 *
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo) {
	int iCnt = 0;
	if(iNo < 0) {
		iNo = -iNo;
	}
	for (iCnt = 1; iCnt <= iNo; ++iCnt) {
		printf("%d * ", iCnt);
	}
	printf("\n");
}
