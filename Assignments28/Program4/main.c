#include "Header.h"

int main() {
	char arr[20];
	int iRet = 0;

	printf("Enter String: ");
	scanf("%[^\n]s", arr);

	DisplayDigit(arr);
	return 0;
}
