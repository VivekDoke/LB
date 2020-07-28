#include "Header.h"

/////////////////////////////////////////////////
// Function Name: Display
// Description: Accept one number from user and 
//				print that number of * on screen
// Input: Integer
// Output: Void
// Author: Vivek Shrihari Doke
// Date: 24 July 2020
/////////////////////////////////////////////////

void Display(int iNo) {
	int iCnt=0;
	for( iCnt=0; iCnt<iNo; iCnt++) {
		printf(" * ");
	}
}
