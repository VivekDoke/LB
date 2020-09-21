#include "Header.h"

int main() {
	int iValue = 0;
	int iNo = 0;
	printf("Enter string: ");
	scanf("%d", &iNo);

	iValue = Reverse(iNo);

	printf("%d\n",iValue);
	return 0;
}
