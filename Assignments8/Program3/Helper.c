#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: CountOdd
// Description: WAP which accept number from user and return 
//			    its factorial..
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

int Factorial(int iNo) {
	int iFact = 0;

	if(iNo < 0) {
		iNo = -iNo;	
	}
	
	if(iNo == 1) {
		return 1;
	}
	iFact = iNo * Factorial(iNo-1);

	return iFact;
}
