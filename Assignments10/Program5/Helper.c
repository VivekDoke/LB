#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: MultipleDisplay
// Description: WAP which accept which accept area in square 
//				feet and convert it into square meter 
// Input: int
// Output: double
// Author: Vivek Shrihari Doke
// Date: 08 August 2020
//
/////////////////////////////////////////////////////////////

double SquareMeter(int iValue) {
	double dArea = 0.0;
	dArea = iValue * 0.0929;
	return dArea;
}		
