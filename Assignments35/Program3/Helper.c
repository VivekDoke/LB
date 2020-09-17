#include "Header.h"

/* WAP which accept one number from user and check
whether 9th or 12th bit is on or off.*/

BOOL ChkBit(UINT No) {
	if(((No | 0x100) == No) || ((No | 0x800) == No)) {
		return TRUE;
	}
	return FALSE;
}
