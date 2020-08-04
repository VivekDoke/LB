#include "Header.h"

/////////////////////////////////////////////////////////////
//
// Name: DisplayEvenFactor 
// Description: WAP which accepts number from user and print even 
// 		        factors of number. 
// Input: Integer
// Output: Void
// Author: Vivek Shrihari Doke
// Date: 01 August 2020
//
/////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iValue) {
	int i=0;
		
	if (iValue <=0 ) {
		iValue = -iValue;
	}
		
	for(i=1; i <= iValue/2; i++) {
		if((i % 2 == 0) && (iValue % i == 0)) {
			printf("%d\n",i);
		}
	}
}
