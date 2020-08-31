#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Difference
// Description: Accept N numbers from user and 
// return the difference between largest and
// smallest number.
// 
// Input: N: 6 
//        85 66 3 66 93 88 
// Output: 90 (93-3)
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

int Difference(int *iptr, int iLength) {
	int i=0;
	int iMax = *(iptr+i);
	int iMin = *(iptr+i);
	for(i=1; i<iLength; i++) {
		if(*(iptr+i) > iMax) {
			iMax = *(iptr+i);
		}
		if(*(iptr+i) < iMin) {
			iMin = *(iptr+i);
		}
	}
	return iMax-iMin;
}
