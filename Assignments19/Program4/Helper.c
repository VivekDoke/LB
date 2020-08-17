#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 5  iCol = 5
// Output: * * * * *    	11 12 13 14 15
//		   * # # * *		21 22 23 24 25
//		   * # * # *		31 32 33 34 35
//		   * * # # *		41 42 43 44 45
//		   * * * * *		51 52 53 54 55	
//
// Author: Vivek Shrihari Doke
// Date: 13 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;
	if(iRow < 0) {
		iRow = -iRow;
	}
	
	if(iCol < 0) {
		iCol = -iCol;
	}
	
	if(iCol != iRow) {
		printf("Error:Invalid Input\n");
		return;
	}
	int iTemp = iCol;

	for(iCntC = 1; iCntC <= iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			if((iCntR == 1) || (iCntC == 1) || (iCntR == iCol) || (iCntC == iCol) || (iCntR == iTemp)) {
				printf("* ");
			}
		/*	if(iCntR <= iCntC) {
				printf("# ");
			}
			if(iCntR >= iCntC) {
				printf("$ ");
			}*/
			else if(iCntR < iTemp){
				printf("# ");
			}
			else {
				printf("$ ");
			}
		}
		iTemp--;
		printf("\n");
	}
	printf("\n");
}
