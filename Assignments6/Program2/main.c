#include "Header.h"

int main() {
	int iValue = 0;
	BOOL bRet = FALSE;	

	printf("Enter number: ");
	scanf("%d",&iValue);

	bRet = ChkZero(iValue);
	if(bRet == TRUE) {
		printf("It Contains Zero\n");
	}
	else {
		printf("There is no Zero\n");
	}
	return 0;
}
