#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: RangeDisplayRev
// Description: WAP which accept range from user and dislay all 
//				numbers in between that range. 	  
// Input: int, int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd) {
	if(iStart > iEnd) {
		printf("Invalid Range\n");
	}
	
	while(iStart <= iEnd) {
		printf("%d ",iEnd);
		--iEnd;
	}
	printf("\n");
}
