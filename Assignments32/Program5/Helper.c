#include "Header.h"

BOOL CheckBit(UINT iNo)
{
    int iMask = 0x80000001;
    
    int iResult = 0;
    if(iNo < 0) {
        iNo = -iNo;
    }

    iResult = iNo & iMask;
    
    if(iResult == iMask) {
        return TRUE;
    }
    
	return FALSE;
}
