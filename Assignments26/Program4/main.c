#include "Header.h"

int main() {
	char cValue = '\0';
	BOOL bRet = FALSE;	
	
	printf("Enter the character: ");
	scanf("%c",&cValue);
	
	bRet = ChkSpecial(cValue);

	if(bRet == TRUE) {
		printf("It is special character\n");
	}
	else {
		printf("It is not a special character\n");
	}
	return 0;
}
