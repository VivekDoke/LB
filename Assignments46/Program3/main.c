#include "Header.h"

int main() {
	int iRet = 0;
	char arr[20];

	printf("Enter string: ");
	scanf("%s", arr);

	iRet = Strlen(arr);

	printf("%d\n", iRet);

	return 0;
}
