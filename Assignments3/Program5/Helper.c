#include "Header.h"

//////////////////////////////////////////////////////////////////
//
// Name: ChkVowel
// Description: Accept on character from user and check whether
//				that character is vowel (a,e,i,o,u) or not.
// Input: Char
// Output: BOOL
// Author: Vivek Shrihari Doke
// Date: 01 August 2020
//
//////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cVowel) {
	if((cVowel == 'a') || (cVowel == 'e') || (cVowel == 'i') || (cVowel == 'o' ) || (cVowel == 'u')) {
		return TRUE;
	}
	else {
		return FALSE;
	}
}
