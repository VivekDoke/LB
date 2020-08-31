#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Frequency
// Description: Accept N numbers from user and 
// return frequency of 11.
// Input: N: 6
//        85 66 3 80 93 88 
// Output: 0
//
// Author: Vivek Shrihari Doke
// Date: 18 August 2020
//
/////////////////////////////////////////////////////////////

int Frequency(int *iptr, int iLength) {
	int i=0;
	int iFreq = 0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) == 11) {
			iFreq++;
		}
	}
	return iFreq;
}
