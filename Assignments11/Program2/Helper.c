#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: RangeDisplay
// Description: WAP which accept range from user and dislay even
//				numbers in between that range. 	  
// Input: int, int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd) {
	if(iStart > iEnd) {
		printf("Invalid Range\n");
	}
	
	while(iStart <= iEnd) {
		if(iStart % 2 == 0) {
			printf("%d ",iStart);
		}
		++iStart;
	}
	printf("\n");
}
