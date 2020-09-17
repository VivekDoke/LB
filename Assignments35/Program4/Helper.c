#include "Header.h"

/* WAP which accept one number, two positions from user and check whether bit at first or bit at second position is ON or OFF*/

BOOL ChkBit(UINT No, int iPos1, int iPos2) {
	if(((No | 1 << (iPos1-1)) == No) || ((No | 1 << (iPos2-1)) == No)) {
		return TRUE;
	}
	return FALSE;
}
