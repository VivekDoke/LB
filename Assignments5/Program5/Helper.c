#include "Header.h"
#include<math.h>

/////////////////////////////////////////////////////////////
//
// Name: Percentage
// Description: WAP which accept total marks & obtained marks
//				from user and calculate percentage.
// Input: int, int
// Output: float
// Author: Vivek Shrihari Doke
// Date: 03 August 2020 
//
//////////////////////////////////////////////////////////

float Percentage(int iTotalMarks, int iObtainedMarks) {
	float iCalPer = 0.0;
	iCalPer = (iObtainedMarks * 100.0) / iTotalMarks; 
	return iCalPer;
}
