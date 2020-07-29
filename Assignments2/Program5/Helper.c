#include "Header.h"

///////////////////////////////////////////////
// Function Name: ChkEven
// Description: Accept number from user and check
//			   if it's Even or not.
// Input: Interger
// Output: Boolean
// Author: Vivek Shrihari Doke
// Date: 24 July 2020  
////////////////////////////////////////////////

BOOL ChkEven(int iNo) {
	int iRes = iNo % 2;
	if(iRes == FALSE) {
		return FALSE;
	}
	else {
		return TRUE;
	}
}
