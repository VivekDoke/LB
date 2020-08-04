#include "Header.h"

int main() {
	char cValue = '\0';
	BOOL bRet = FALSE;

	printf("Enter Character : ");
	scanf("%c",&cValue);

	bRet = ChkVowel(cValue);
	if(bRet == TRUE) {
		printf("It is vowel\n");
	}
	else {
		printf("It is not vowel\n");
	}
	return 0;
}
