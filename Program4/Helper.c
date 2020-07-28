#include "Header.h"

///////////////////////////////////////////////
// Function Name: Display
// Description: Accept two numbers from use and
//			    display first number and in second
//			    number of times
// Input: Integers, Integers
// Output: Void
// Author: Vivek Shrihari Doke
// Date: 24 July 2020 
////////////////////////////////////////////////

void Display(int iNo, int iFrequency) {
	int iInt = 0;
	for ( ; iInt<iFrequency; iInt++) {
		printf("%d ", iNo);
	}
}
