#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: DisplayDigit
// Description: WAP which accept number from user and display
//			    its digits in reverse order.
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 04 August 2020
//
/////////////////////////////////////////////////////////////

void DisplayDigit(int iNo) {
	int iDigit = 0;
	
	if(iNo < 0) {
		iNo = -iNo;	
	}

	while(iNo != 0) {
		iDigit = iNo % 10; 
		printf("%d\n", iDigit);
		iNo = iNo / 10;
	}
}
