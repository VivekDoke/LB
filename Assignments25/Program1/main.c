#include "Header.h"

int main() {
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter the character: ");
	scanf("%c",&cValue);

	bRet = ChkAlpha(cValue);

	if(bRet == TRUE) {
		printf("It is character\n");
	}
	else {
		printf("It is not a character\n");
	}
	return 0;
}
