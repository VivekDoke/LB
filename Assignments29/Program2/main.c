#include "Header.h"

int main() {
	char arr[20];
	char cValue;
	int iRet = 0;

	printf("Enter String: ");
	scanf("%[^'\n']s", arr);
	
	printf("Enter the character: ");
	scanf(" %c", &cValue);

	iRet = CountChar(arr, cValue);
	
	printf("%d\n",iRet);
	return 0;
}
