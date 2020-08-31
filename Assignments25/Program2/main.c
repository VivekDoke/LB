#include "Header.h"

int main() {
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character: ");
	scanf("%c",&cValue);
	
	if(cValue < 65 || cValue > 122) {
		return -1;
	}
	bRet = ChkCapital(cValue);

	if(bRet == TRUE) {
		printf("It is not capital\n");
	}
	else {
		printf("It is capital\n");
	}
	return 0;
}
