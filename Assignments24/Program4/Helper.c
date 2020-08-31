#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Digits
// Description: Accept N numbers from user and 
// display all such numbers which contains 3 digits
// in it
// 
// Input: N: 6 
//        8225 665 3 76 953 858
// Output: 665 953 858
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

void Digits(int *iptr, int iLength) {
	int i=0;
	int iNo = 0, iDigit = 0, iCount = 0;
	for(i=0; i<iLength; i++) {
		iNo = *(iptr+i);
		while(iNo != 0) {
			iDigit = iNo % 10;
			iCount++;
			iNo = iNo / 10;
		}
		if(iCount == 3) {
			printf("%d\n", *(iptr+i));
		}
		iCount = 0;
	}
}
