#include "Header.h"

/*WAP which accept one number from user and count number of 
ON (1) bits in it without using % and / operator*/

UINT CountOne(UINT iNo) {
	UINT Count = 0;
	while(iNo) {
		Count = Count + (iNo & 1);
		iNo = iNo >> 1;
	}
	return Count;
}
