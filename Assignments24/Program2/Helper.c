#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: FirstOcc
// Description: Accept N numbers from user and 
// return the largest number.
// 
// Input: N: 6 
//        85 66 11 80 93 88 
// Output: 93
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

int Maximum(int *iptr, int iLength) {
	int i=0;
	int iMax = *(iptr+i);
	for(i=1; i<iLength; i++) {
		if(*(iptr+i) > iMax) {
			iMax = *(iptr+i);
		}
	}
	return iMax;
}
