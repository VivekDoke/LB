#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Difference
// Description: Accept N numbers from user and 
// return difference between frequency of even 
// numbers and odd numbers.
// Input: N: 6
//        85 66 3 80 93 88 
// Output: 1 (4-3)
//
// Author: Vivek Shrihari Doke
// Date: 18 August 2020
//
/////////////////////////////////////////////////////////////

int Frequency(int *iptr, int iLength) {
	int i=0;
	int iSumFreq = 0, iOddFreq = 0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) % 2 == 0) {
			iSumFreq = iSumFreq + 1;
		}
		else {
			iOddFreq = iOddFreq + 1;
		}
	}
	printf("\n");
	return iSumFreq - iOddFreq;
}
