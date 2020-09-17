#include "Header.h"

// Write a program which accept one number and position from user and off bit. Return modified number.

UINT OffBit(UINT iNo, int iPos)
{    
    UINT iResult = 0;
	UINT iMask = 0X00000001;
    if(iNo < 0) {
        iNo = -iNo;
    }

	if((iPos < 1) || (iPos > 32)) {
		return 0;
	}

    iMask = iMask << (iPos-1);
    iResult = (iNo & ~iMask);    
	return iResult;
}
