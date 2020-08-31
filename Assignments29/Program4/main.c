#include "Header.h"

int main() {
	char arr[20];
	char cValue;
	int iRet = 0;

	printf("Enter String: ");
	scanf("%[^'\n']s", arr);
	
	printf("Enter the character: ");
	scanf(" %c", &cValue);

	iRet = LastChar(arr, cValue);
	
	if (iRet == -1) {
		printf("Character is not present\n");
	}
	else {
		printf("%d\n",iRet);
	}
	return 0;
}
