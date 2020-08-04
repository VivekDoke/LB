#include "Header.h"

///////////////////////////////////////////////////////////////////
//
// Name: PrintEvenFactorsofNumber
// Description: WAP which accepts number from user and print even 
// 		        factors of number (*including one). 
// Input: Integer
// Output: void
// Author: Vivek Shrihari Doke
// Date: 01 August 2020
//
//////////////////////////////////////////////////////////////////

void PrintEvenFactorsofNumber(int iValue) {
	int i=0;
		
	if (iValue <=0 ) {
		iValue = -iValue;
	}
		
	for(i=1; i <= iValue/2; i++) {
		if(i == 1) {
			printf("1\n");
		}
		if((iValue % i == 0) && (i % 2 == 0)) {
			printf("%d\n",i);
		}
	}
}
