#include "Header.h"

///////////////////////////////////////////////////
//
// Name: SchoolFees
// We have to design application for tourist
// company. Tourist company provides cars on rent.
// Depends on the running of car they apply rent.
// If running is less than 100 kilometres then 
// they charge 25 rupees per kilometre .And if 
// running is more than 100 kilometres then they 
// apply 15 rupees per kilometre after 100 
// kilometres. We have to accept number of 
// kilometres from user and return the estimated 
// rent.
// Input: int
// Output: int
// Author: Vivek Shrihari Doke
// Date: 19 August 2020
//
///////////////////////////////////////////////////

int TouristBill(int iKm) {
	int iBill = 0;
	if(iKm <= 100) {
		iBill = 25 * iKm;
	}
	if(iKm > 100){
		iBill = 2500 + (iKm-100)*15;
	}
	return iBill;
}

