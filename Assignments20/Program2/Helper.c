#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: IncomeTax
// Description: Design application for income tax department to calculate tax amount. According to the income tax department there is no income tax for the income less than 5 lakhs. If income is in between 5 to 10 lakhs then there will be 10% tax. If income is in between 10 to 20 lakhs then there will be 20% tax. And for more than 20 lakhs there will be 30% tax.We have to accept gross income from user and return the tax amount.

// Input: 600000 450000 1200000
// Output: 10000  0 90000
//
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
/////////////////////////////////////////////////////////////

float IncomeTax(int iAmount) {
	float fTax = 0.0;
	
	if(iAmount > 2000000) {
		fTax = fTax + (iAmount * 0.30);
	}
	if((iAmount > 1000000) && (iAmount < 2000000)) {	//	iAmount = iAmount - 1000000;
		fTax = fTax + (iAmount * 0.20);
	}
	if((iAmount > 500000) && (iAmount < 1000000)) {
		iAmount = iAmount - 500000;
		fTax = iAmount * 0.10;
	}
	return fTax;
}
