#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: WAP which accept number from user and display 
//              below program.. 	  
// Input: IRow = 3  iCol = 4
// Output: * # * #
//		   * # * #
//		   * # * #
//		
// Author: Vivek Shrihari Doke
// Date: 11 August 2020
//
/////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol) {
	int iCntR = 0, iCntC = 0;

	for(iCntC = 1; iCntC <= iRow; iCntC++) {
		for(iCntR = 1; iCntR <= iCol; iCntR++) {
			if(iCntR % 2 == 0) {
				printf("# ");
			}
			else {	
				printf("* ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
