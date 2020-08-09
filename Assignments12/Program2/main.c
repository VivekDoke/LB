#include "Header.h"

int main() {
	int iValue = 0, iRet = 0;
	
	printf("Enter number of USD: ");
	scanf("%d",&iValue);

	iRet = DollarToINR(iValue);
	if(iRet) {
		printf("Value in INR is %d\n", iRet);
	}
	return 0;
}
