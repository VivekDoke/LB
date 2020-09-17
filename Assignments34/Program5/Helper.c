#include "Header.h"

// Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is group of four bits) 

UINT ToggleBit(UINT iNo)
{    
    UINT iResult = 0;
	UINT iMask = 0X20000002;
    if(iNo < 0) {
        iNo = -iNo;
    }

    iResult = iNo ^ iMask;
    
	return iResult;
}
