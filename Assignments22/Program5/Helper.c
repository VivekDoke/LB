#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Frequency
// Description: Accept N numbers from user and 
// accept one another number as NO, return frequency// of NO form it.
// Input: N: 6
//		  No.66
//        Elements: 85 66 3 80 93 88 
// Output: 1
//
// Author: Vivek Shrihari Doke
// Date: 18 August 2020
//
/////////////////////////////////////////////////////////////

int Frequency(int *iptr, int iLength, int iNo) {
	int i=0;
	int iFreq = 0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) == iNo) {
			iFreq++;
		}
	}
	return iFreq;
}
