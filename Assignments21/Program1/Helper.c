#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Difference
// Description: Accept N numbers from user and 
// return difference between summation of even 
// elements and summation of odd elements.
// Input: N: 6
//        85 66 3 80 93 88 
// Output: 53 (234-181)
//
// Author: Vivek Shrihari Doke
// Date: 17 August 2020
//
/////////////////////////////////////////////////////////////

int Difference(int *iptr, int iLength) {
	int i=0;
	int iSum = 0, iDiff = 0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) % 2 == 0) {
			iSum = iSum + *(iptr +i);
		}
		else {
			iDiff = iDiff + *(iptr+i);
		}
	}
	return iSum - iDiff;
}
