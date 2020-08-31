#include "Header.h"

//////////////////////////////////////////////////
//
// Name: ChkAplha
// Description: Accept character from user and
// check whether it is alphabet or not.
// Input: character
// Output: BOOL
// Name: Vivek Shrihari Doke
// Date: 20 August 2020 
//
//////////////////////////////////////////////////

BOOL ChkAlpha(char ch) {
	if(ch >= 65 && ch <= 122) {
		return TRUE;
	}
	return FALSE;
}
