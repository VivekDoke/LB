#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Range
// Description: Accept N numbers from user and accept Range// Display all elements from that range 
// 
// Input: N: 6
//		  Start: 60
//		  End: 90
//        85 66 3 76 93 88 
// Output: 66 76 88
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

void Range(int *iptr, int iLength, int iStart, int iEnd) {
	int i=0;
	int iFreq = 0;
	for(i=0; i<iLength; i++) {
		if((iStart < *(iptr+i)) && (iEnd > *(iptr+i))) {
			printf("%d ",*(iptr+i));
		}
	}
	printf("\n");
}
