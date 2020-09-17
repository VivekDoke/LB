#include "Header.h"

int main() {
	
	UINT uNum = 0;
	BOOL bRet = FALSE;

	printf("Please enter unsigned number: ");
	scanf("%d", &uNum);
	
	bRet = ChkBit(uNum, 15);

	if(bRet == TRUE) {
        printf("Bit is on\n");
    }
    else {
        printf("Bits is Off\n");
    }	
	return 0;
}
