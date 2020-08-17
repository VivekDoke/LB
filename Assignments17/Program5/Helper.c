#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 4  iCol = 4
// Output: 1 2 3 4		11 12 13 14
//		   1 * * 4	    21 22 23 24
//		   1 * * 4	    31 32 33 34
//		   1 2 3 4		41 42 43 44
//
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	if(iRow < 0) {
		iRow = -iRow;
	}
	
	if(iCol < 0) {
		iCol = -iCol;
	}
	
	if(iCol != iRow) {
		printf("Error:Invalid Input\n");
		return;
	}
	for(iCntC = 1 ;iCntC <= iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			if((iCntC == 1) || (iCntC == iRow) || (iCntR == 1) || (iCntR == iCol)) {
				printf("%d ",iCntR);
			}
			else {
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
