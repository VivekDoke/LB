#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: Accept N numbers from user and 
// accept one another number as NO, check whether NO is
// present or not.
// Input: N: 6
//		  No: 66 
//        85 66 11 80 93 88 
// Output: TRUE
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

int FirstOcc(int *iptr, int iLength, int iNo) {
	int i=0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) == iNo) {
			return i;
		}
	}
	return -1;
}
