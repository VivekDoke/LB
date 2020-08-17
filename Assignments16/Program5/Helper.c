#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 4  iCol = 4
// Output: 1 2 3 4 
//		   2 3 4 5
//		   3 4 5 6
//		   4 5 6 7
//
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	int iCnt = 1;
	int iTemp = iCnt;
	for(iCntC = 1 ;iCntC <= iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			printf("%d ", iTemp++);
		}
		iCnt = iCnt + 1;
		iTemp = iCnt;
		printf("\n");
	}
	printf("\n");
}
