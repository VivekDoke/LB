#include "Header.h"

//////////////////////////////////////////////////////////////
//
// Name: DisplayOdd
// Description: WAP which accept temperature in farenheit and 
//			    convert in into celcius
// Input: float
// Output: double
// Author: Vivek Shrihari Doke
// Date: 08 August 2020
//
/////////////////////////////////////////////////////////////

double FhtoCs(float fTemp) {
	double dCs = 0.0;
	dCs = ((fTemp - 32) * 5)/9;
	return dCs;
}
