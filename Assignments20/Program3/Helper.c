#include "Header.h"

///////////////////////////////////////////////////
//
// Name: SchoolFees
// Description: Design application for school 
// management system. As school is primary there 
// are 4 standards from 1 to 4.School fees of each 
// standard is different. For first standard fees
//  are 8900, for second standard 12790, for third
//  standard 21000 and for fourth standard fees are // 23450. We have to accept standard from user and
//  display the corresponding fees.
//
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
///////////////////////////////////////////////////

int SchoolFees(int iStandard) {
	if(iStandard == 1) {
		return 8900;
	}
	else if(iStandard == 2) {
		return 12790;
	}
	else if(iStandard == 3) {
		return 21000;
	}
	else if(iStandard == 4) {
		return 23450;
	}
	return -1;
}
