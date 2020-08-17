#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 4  iCol = 4
// Output: 2 4 6 8 10
//		   1 3 5 7 9
//		   2 4 5 8 10
//		   1 3 5 7 9
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	for(iCntC = 1 ;iCntC<=iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol+1; iCntR++) {
			if(iCntC % 2 != 0) {
				printf("%d ", iCntR*2);
			}
			else {
				printf("%d ", iCntR*2-1);
			}
		}
		printf("\n");
	}
	printf("\n");
}
