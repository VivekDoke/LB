#include "Header.h"

/////////////////////////////////////////////////////////////
//
// Name: DisplayConvert
// Description: Accept one character from user and convert
//				case of that character
// Input: Interger
// Output: Void
// Author: Vivek Shrihari Doke
// Date: 01 August 2020
//
/////////////////////////////////////////////////////////////

void DisplayConvert(char CValue) {
	if((CValue >= 65) && (CValue <= 90)) {
		printf("%c\n",CValue+32);
	}
	else if((CValue >=97) && (CValue <= 122)) {
		printf("%c\n",CValue-32);
	}
}
