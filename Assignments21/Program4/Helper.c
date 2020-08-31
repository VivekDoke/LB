#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: Accept N numbers from user and 
// return difference between all the elements which
// are divisible by 3 and 5.
// Input: N: 6
//        85 66 3 80 93 88 
// Output: 15
//
// Author: Vivek Shrihari Doke
// Date: 18 August 2020
//
/////////////////////////////////////////////////////////////

void Display(int *iptr, int iLength) {
	int i=0;
	int iSum = 0, iDiff = 0;
	for(i=0; i<iLength; i++) {
		if((*(iptr+i) % 3 == 0) && (*(iptr+i) % 5 == 0)) {
			printf("%d\n",*(iptr+i));
		}
	}
	printf("\n");
}
