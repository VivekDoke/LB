#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: LastOcc
// Description: Accept N numbers from user and 
// accept one another number as NO, and return 
// index of last occurrence of that NO.
//
// Input: N: 6
//		  No: 66 
//        85 66 3 66 80 93 88 
// Output: 3
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

int LastOcc(int *iptr, int iLength, int iNo) {
	int i = 0;
	int iLastOcc = 0, iflag = 0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) == iNo) {
			iLastOcc = i;
			iflag = 1;
		}
	}
	if(iflag) {
		return iLastOcc;
	}
	return -1;
}
