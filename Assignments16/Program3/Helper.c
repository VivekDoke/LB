#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 5  iCol = 5
// Output: a b c d e
//		   1 2 3 4 5
//		   a b c d e
//		   1 2 3 4 5
//		   a b c d e
//
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	int iAscii = 97;
	for(iCntC = 1 ;iCntC<=iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			if(iCntC % 2 != 0) {
				printf("%c ", iAscii++);
			}
			else {
				printf("%d ", iCntR);
			}
		}
		iAscii = 97;
		printf("\n");
	}
	printf("\n");
}
