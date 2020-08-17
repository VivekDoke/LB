#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 4  iCol = 5
// Output: 4 4 4 4 4 4
//		   3 3 3 3 3 3
//		   2 2 2 2 2 2
//		   1 1 1 1 1 1
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0; 
	int iTemp = iRow;
	for(iCntC = 1; iCntC<=iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			printf("%d ",iTemp);
		}
		iTemp--;
		printf("\n");
	}
	printf("\n");
}
