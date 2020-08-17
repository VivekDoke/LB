#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 3  iCol = 4
// Output: 1 1 1 1 1
//		   2 2 2 2 2
//		   3 3 3 3 3
//		
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;

	for(iCntC = 1; iCntC<=iRow; iCntC++) {
		for(iCntR = iCol; iCntR > 0; --iCntR) {
			printf("%d ",iCntC);
		}
		printf("\n");
	}
	printf("\n");
}
