#include "Header.h"

/*WAP which accept two numbers from user and display position of common ON bits from that two numbers.*/

void CommonBits(UINT iNo1, UINT iNo2) {
	UINT Count = 1;
	while(iNo1 || iNo2) {
		if((iNo1 & 1) && (iNo2 & 1)) {
			printf("%d ", Count);
		}
		iNo1 = iNo1 >> 1;
		iNo2 = iNo2 >> 1;
		++Count;
	}
	printf("\n");
}
