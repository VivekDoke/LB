#include "Header.h"

int main() {
	char arr[20];
	char cValue;
	BOOL bRet = FALSE;

	printf("Enter String: ");
	scanf("%[^'\n']s", arr);
	
	printf("Enter the character: ");
	scanf(" %c", &cValue);

	bRet = ChkChar(arr, cValue);
	
	if(bRet == TRUE) {
		printf("Character found\n");
	}
	else {
		printf("Character not found\n");
	}
	return 0;
}
