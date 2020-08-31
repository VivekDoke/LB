#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Product
// Description: Accept N numbers from user and return
//				product of all odd elements.
//		
// Input: N: 6
//        Elements: 15 66 3 70 10 88 
// Output: 45
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

int Product(int *iptr, int iLength) {
	int i=0;
	int iOddProd = 1, iflag = 0;
	for(i=0; i<iLength; i++) {
		if(*(iptr+i) % 2 != 0) {
			iOddProd = iOddProd * (*(iptr+i));
			iflag = 1;
		}
	}
	if(iflag) {
		return iOddProd;
	}
	return 0;
}
