#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: RangeSum
// Description: WAP which accept range from user and return 
//				addition of all numbers in between that range. 
// Input: int, int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd) {
	int iSum = 0;
		
	if((iStart < 0) || (iStart > iEnd)) {	
		printf("Invalid Range\n");
		return 0;
	}
	
	while(iStart <= iEnd) {
		iSum = iSum + iStart;
		++iStart;
	}
	return iSum;
}
