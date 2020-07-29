#include "Header.h"

int main() {
	int iValue = 0;
	BOOL bRet = FALSE;

	printf("Enter number: ");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);

	if(bRet == FALSE) {
		printf("Number is Even\n");
	}
	else {
		printf("Number is Odd\n");
	}
	return 0;
}
