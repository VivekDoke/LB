#include "Header.h"

/////////////////////////////////////////////////////////
//
// Name: ChkGreater
// Description: WAP which accept one number from user
//				and check whether that number is greater
// 				than 100 or not.
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 03 August 2020
//
/////////////////////////////////////////////////////////

BOOL ChkGreater(int iValue) {
	if(iValue > 100) {
		return TRUE;
	}	
	else {
		return FALSE;
	}
}
