#include "Header.h"

//////////////////////////////////////////////////
//
// Name: ChkCapital
// Description: Accept character from user and
// check whether it is capital or not.
// Input: character
// Output: BOOL
// Name: Vivek Shrihari Doke
// Date: 20 August 2020 
//
//////////////////////////////////////////////////

BOOL ChkCapital(char ch) {
	if(ch >= 97 && ch <= 122) {
		return TRUE;
	}
	return FALSE;
}
