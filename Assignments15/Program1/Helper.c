#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 4  iCol = 4
// Output: A B C D
//		   A B C D
//		   A B C D
//		   A B C D
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	for(iCntC = 1 ;iCntC<=iRow; iCntC++) {
		int iAscii = 65;
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			printf("%c ", iAscii++);
		}
		printf("\n");
	}
	printf("\n");
}
