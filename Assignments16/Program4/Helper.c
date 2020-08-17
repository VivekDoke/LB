#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 5  iCol = 5
// Output: 1 2 3 4 5
//		   -1 -2 -3 -4 -5
//		   1 2 3 4 5
//		   -1 -2 -3 -4 -5
//		   1 2 3 4 5
//
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	int iTemp = 0;
	for(iCntC = 1 ;iCntC<=iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			if(iCntC % 2 != 0) {
				printf("%d\t", ++iTemp);
			}
			else {
				printf("%d\t", --iTemp);
			}
		}
		iTemp = 0;
		printf("\n");
	}
	printf("\n");
}
