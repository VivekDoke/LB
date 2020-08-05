#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: DisplayDigit
// Description: WAP which accept number from user and if number 
//			    is less than 50 print small, if it is greater // 			  than 50 and less than 100 print medium and if it is
//				greater than 100 print large
// Input: int
// Output: void
// Author: Vivek Shrihari Doke
// Date: 06 August 2020
//
/////////////////////////////////////////////////////////////

void Number(int iNo) {
	if(iNo < 50) {
		printf("Small\n");
	}
	else if(iNo > 50 && iNo < 100) {
		printf("Medium\n");
	}
	else if(iNo > 100) {
		printf("Large\n");
	}
}
