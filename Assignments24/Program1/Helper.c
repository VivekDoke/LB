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

int Minimum(int *iptr, int iLength) {
	int i=0;
	int iMin = *(iptr+i);
	for(i=1; i<iLength; i++) {
		if(*(iptr+i) < iMin) {
			iMin = *(iptr+i);
		}
	}
	return iMin;
}
