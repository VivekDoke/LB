#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: RangeSumEven
// Description: WAP which accept range from user and return 
//				addition of all even numbers in between that range. 
// Input: int, int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd) {
	int iSum = 0;
		
	if((iStart < 0) || (iStart > iEnd)) {	
		printf("Invalid Range\n");
		return 0;
	}
	
	while(iStart <= iEnd) {
		if(iStart % 2 == 0) {
		 	iSum = iSum + iStart;
		}
		++iStart;
	}
	return iSum;
}
