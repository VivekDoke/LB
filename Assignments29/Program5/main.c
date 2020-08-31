#include "Header.h"

int main() {
	char arr[20];
	char cValue;
	int iRet = 0;
	char* str = arr;
	printf("Enter String: ");
	scanf("%[^'\n']s", arr);
	
	StrRevX(arr);
	while(*str != '\0') {
		printf("%c",*str);
		*str++;
	}
	printf("\n");	
	return 0;
}
