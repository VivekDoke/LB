#include "Header.h"

int main() {
	char arr[20];
	BOOL iRet = FALSE;

	printf("Enter String: ");
	scanf("%[^\n]s", arr);

	iRet = ChkVowel(arr);
	if(iRet == TRUE) {
		printf("TRUE\n");
	}
	else {
		printf("FALSE\n");
	}
	return 0;
}
