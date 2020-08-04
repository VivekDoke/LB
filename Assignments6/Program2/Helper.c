#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: ChkZero
// Description: WAP which accept number from user and check 
//				whether it contains 0 in it or not
// Input: int
// Output: BOOL
// Author: Vivek Shrihari Doke
// Date: 04 August 2020
//
/////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo) {
	int iDigit = 0;
	
	if(iNo < 0) {
		iNo = -iNo;	
	}

	while(iNo != 0) {
		iDigit = iNo % 10; 
		if(iDigit == 0) {
			return TRUE;
		}
		iNo = iNo / 10;
	}
	return FALSE;
}
