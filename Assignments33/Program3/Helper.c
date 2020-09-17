#include "Header.h"

// Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

UINT ToggleBit(UINT iNo)
{    
    UINT iResult = 0;
    if(iNo < 0) {
        iNo = -iNo;
    }
	
    iResult = iNo ^ (1 << 6);
    
	return iResult;
}
