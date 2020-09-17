#include "Header.h"

// Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TRUE otherwise return FALSE..

BOOL ChkBit(UINT iNo, int iPos) {
    int iMask = 0x00000001;
    
    int iResult = 0;
    if(iNo < 0) {
        iNo = -iNo;
    }
    
    if((iPos < 1) || (iPos > 32)) {
        return FALSE;
    }
    
    iMask = iMask << (iPos -1);
    iResult = iNo & iMask;
    
    if(iResult == iMask) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}
