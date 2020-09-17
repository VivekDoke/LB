#include "Header.h"

/* WAP which accept one number from user and range ofposition from user. Toggle all bits from that range.*/

UINT ToggleBitRange(UINT uNo, int iStart, int iEnd) {
	int i = 0;
	for(i = iStart; i <= iEnd; i++) {
		uNo = (uNo | 1 << (i-1));
	}
	return uNo;
}
