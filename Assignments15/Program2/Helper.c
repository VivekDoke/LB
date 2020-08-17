#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 4  iCol = 4
// Output: A B C D
//		   a b c d
//		   A B C D 
//		   a b c d
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	int iAscii = 65;
	for(iCntC = 1; iCntC<=iRow; iCntC++) {
		if(iCntC % 2 != 0) {
			iAscii = 65;
		}
		else {
			iAscii = 97;
		}
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			printf("%c ",iAscii++);
		}
		printf("\n");
	}
	printf("\n");
}
