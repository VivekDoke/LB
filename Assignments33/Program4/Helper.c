#include "Header.h"

// Write a program which accept one number from user and toggle 7th and 10th bit of that number if it is on. Return modified number.

UINT ToggleBit(UINT iNo)
{    
    UINT iResult = 0;
	UINT iMask = 0X240;
    if(iNo < 0) {
        iNo = -iNo;
    }

    iResult = iNo ^ iMask;
    
	return iResult;
}
