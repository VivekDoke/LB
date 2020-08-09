#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: RangeDisplay
// Description: WAP which accept range from user and dislay all 
//				numbers in between that range. 	  
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd) {
	if(iStart > iEnd) {
		printf("Invalid Range\n");
	}
	
	while(iStart <= iEnd) {
		printf("%d ",iStart);
		++iStart;
	}
	printf("\n");
}
