#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Difference
// Description: Accept N numbers from user and 
// return frequency of even number
// Input: N: 6
//        85 66 3 80 93 88 
// Output: 3
//
// Author: Vivek Shrihari Doke
// Date: 18 August 2020
//
/////////////////////////////////////////////////////////////

int CountEven(int *iptr, int iLength) {
	int i=0;
	int iFreq = 0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) % 2 == 0) {
			iFreq++;
		}
	}
	return iFreq;
}
