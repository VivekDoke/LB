#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: Display
// Description: 1. Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer.If bill bill amount is less than 500 then there is no discount , if bill amount is less than 1500 and more than 500 they give 10% discount.
// And if the bill amount is more than 1500 then they give 15% discount. Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.  
// Input: 1200 290 3700
// Output:290  290 3145
//
// Author: Vivek Shrihari Doke
// Date: 17 August 2020
//
/////////////////////////////////////////////////////////////

int CalculateBill(int iAmount) {
	float fDiscount = 0.0;
	if(iAmount > 1500) {
		fDiscount = iAmount * 0.15;
	}
	if((iAmount < 1500) && (iAmount > 500))	{
		fDiscount = iAmount * 0.10;
	}
	return iAmount - fDiscount;
}
