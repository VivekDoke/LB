#include "Header.h"

// Write a program which accept one number from user and on its first 4 bit of that number. Return modified number.

UINT OnBit(UINT iNo)
{    
    UINT iResult = 0;
	UINT iMask = 0XF;
    if(iNo < 0) {
        iNo = -iNo;
    }

    iResult = iNo | iMask;
    
	return iResult;
}
