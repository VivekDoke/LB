#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 4  iCol = 3
// Output: * * *
//		   * * *
//		   * * *
//		   * * *
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;

	for(iCntC = 1; iCntC<=iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}
