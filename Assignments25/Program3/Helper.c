#include "Header.h"

//////////////////////////////////////////////////
//
// Name: ChkDigit
// Description: Accept character from user and
// 				check whether it is digit or not.
// Input: character
// Output: BOOL
// Name: Vivek Shrihari Doke
// Date: 20 August 2020 
//
//////////////////////////////////////////////////

BOOL ChkDigit(char ch) {
	if(ch >= 48 && ch <= 57) {
		return TRUE;
	}
	return FALSE;
}
