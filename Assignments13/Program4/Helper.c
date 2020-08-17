#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: 4
// Output: # 1 * # 2 * # 3 * # 4 *
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
		printf("# %d * ", iCnt);
	}
	printf("\n");
}
