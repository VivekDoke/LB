#include "Header.h"

////////////////////////////////////////////////////
// Function Name: Check 
// Description: Accept one number and Check whether 
//              it's divisible by 5 or not.
// Input: Integer
// Output: Integer
// Author: Vivek Shrihari Doke
// Date: 24 July 2020
//////////////////////////////////////////////////// 

BOOL Check(int iNo) {
	if((iNo % 5) == 0) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}
