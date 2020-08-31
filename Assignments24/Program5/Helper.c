#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: DigitsSum
// Description: Accept N numbers from user and 
// display summation of digits of each number
// in it
// 
// Input: N: 6 
//        8225 665 3 76 953 858
// Output: 17 17 3 13 17 21
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

void DigitsSum(int *iptr, int iLength) {
	int i=0;
	int iNo = 0, iDigit = 0, iSum = 0;
	for(i=0; i<iLength; i++) {
		iNo = *(iptr+i);
		while(iNo != 0) {
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;
		}
		printf("%d ",iSum);
		iSum = 0;
	}
}
