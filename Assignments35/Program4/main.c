#include "Header.h"

int main() {
	int iNo = 0, iPos1 = 0, iPos2 = 0;
	BOOL bRet = FALSE;
	scanf("%d %d %d", &iNo, &iPos1, &iPos2);
	
	bRet = ChkBit(iNo, iPos1, iPos2);	
	
	if(bRet) {
		printf("TRUE\n");
	}
	else {
		printf("FALSE\n");
	}
	return 0;
}
