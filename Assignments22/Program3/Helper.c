#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: Accept N numbers from user and 
// check whether that numbers contains 11 in it or not.
// Input: N: 6
//        85 66 11 80 93 88 
// Output: 11 is present
//
// Author: Vivek Shrihari Doke
// Date: 18 August 2020
//
/////////////////////////////////////////////////////////////

BOOL Check(int *iptr, int iLength) {
	int i=0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) == 11) {
			return TRUE;
		}
	}
	return FALSE;
}
