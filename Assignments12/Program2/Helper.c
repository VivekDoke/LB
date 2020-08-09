#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: DollarToINR
// Description: Accept amount in US dollar and return its 
//				corresponding value in Indian currency consider
//				1$ as 70 rupees.. 	  
// Input: int, int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 09 August 2020
//
/////////////////////////////////////////////////////////////

int DollarToINR(int iNo) {
	if(iNo < 0) {
		printf("Invalid Amount\n");
		return 0;
	}
	return iNo*70;
}
