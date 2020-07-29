#include "Header.h"

///////////////////////////////////
//
// Function Name: Divide	 
// Input: Integer, Integer
// Output: Interger
// Description: Divide two number
// Author: Vivek Shrihari Doke
// Date: 25 July 2020
//
//////////////////////////////////

int Divide(int iNo1, int iNo2) {
	int iAns = 0;
	if(iNo2 > iNo1) {
		return -1;
	}
	iAns = iNo1 / iNo2;
	return iAns;
} 
