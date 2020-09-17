#include "Header.h"

int main() {
	int iNo = 0;
	BOOL bRet = FALSE;
	printf("Enter the number: ");
	scanf("%d",&iNo);
	
	bRet = ChkBit(iNo);	
	
	if(bRet) {
		printf("TRUE\n");
	}
	else {
		printf("FALSE\n");
	}
	return 0;
}
