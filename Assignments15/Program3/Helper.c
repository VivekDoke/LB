#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 3  iCol = 5
// Output: A A A A A
//		   B B B B B
//		   C C C C C
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	int iAscii = 65;
	for(iCntC = 1; iCntC<=iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			printf("%c ",iAscii);
		}
		iAscii++;
		printf("\n");
	}
	printf("\n");
}
