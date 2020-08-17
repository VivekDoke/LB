#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: 8
// Output: 2 4 6 8 10 12 14 16
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iNo) {
	int iCnt = 1;
	for (iCnt = 1; iCnt<=iNo; ++iCnt) {
		printf("%d ", 2*iCnt);
	}
	printf("\n");
}
