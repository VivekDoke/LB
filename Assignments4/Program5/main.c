#include "Header.h"

int main() {
	int iValue = 0;
	int iRet = 0;

	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = FactDiff(iValue);

	printf("%d\n",iRet);
	return 0;
}
