#include "Header.h"

int main() {
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character: ");
	scanf("%c",&cValue);
	
	if(cValue < 65 || cValue > 122) {
		printf("Error: Enter proper input\n");
		return -1;
	}
	bRet = ChkSmall(cValue);

	if(bRet == TRUE) {
		printf("It is small\n");
	}
	else {
		printf("It is not small\n");
	}
	return 0;
}
