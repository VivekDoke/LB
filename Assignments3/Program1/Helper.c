#include "Header.h"

/////////////////////////////////////////////////////////////
//
// Name: PrintEven
// Description: Program which accept one number from user and
//				print that number of even numbers on screen,
// Input: Integer
// Output: None
// Author: Vivek Shrihari Doke
// Date: 31 July 2020
//
/////////////////////////////////////////////////////////////

void PrintEven(int iNo) {
	if(iNo <= 0) {
		return;
	}

	int iCnt=0;
	int iCounter=0;

	for(iCnt=1; iCnt <= iNo; iCnt++) {
		printf("%d\n",2*iCnt);
	} 
}
