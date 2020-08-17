#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 3  iCol = 5
// Output: 5 4 3 2 1
//		   5 4 3 2 1
//		   5 4 3 2 1
//		
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;

	for(iCntC = 1; iCntC<=iRow; iCntC++) {
		for(iCntR = iCol; iCntR > 0; --iCntR) {
			printf("%d ",iCntR);
		}
		printf("\n");
	}
	printf("\n");
}
