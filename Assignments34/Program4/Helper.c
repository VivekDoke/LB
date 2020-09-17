#include "Header.h"

// Write a program which accept one number from user and toggle 7th and 10th bit of that number if it is on. Return modified number.

UINT ToggleBit(UINT iNo, int iPos)
{    
    UINT iResult = 0;
	UINT iMask = 0X1;
    if(iNo < 0) {
        iNo = -iNo;
    }

    iResult = iNo ^ (iMask << (iPos - 1));
    
	return iResult;
}
