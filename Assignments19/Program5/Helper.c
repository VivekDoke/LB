#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 5  iCol = 5
// Output: 1 2 3 4 5
//		   1 2	   5
//		   1   3   5
//		   1	 4 5 
//		   1 2 3 4 5
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

	for(iCntC = 1; iCntC <= iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			if((iCntR == 1) || (iCntR == iRow) || (iCntC == iCol) || (iCntC == 1) || (iCntR == iCntC)) {
				printf ("%d ",iCntR);
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
