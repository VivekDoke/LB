#include "Header.h"

int main() {
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the digit: ");
	scanf("%c",&cValue);
	
	bRet = ChkDigit(cValue);

	if(bRet == TRUE) {
		printf("It is Digit\n");
	}
	else {
		printf("It is not a Digit\n");
	}
	return 0;
}
