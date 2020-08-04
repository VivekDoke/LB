#include "Header.h"

int main() {
	int iValue = 0;
	int iSum = 0;
	printf("Enter number: ");
	scanf("%d",&iValue);

	iSum = SumNonFact(iValue);
	printf("%d\n",iSum);
	return 0;
}
