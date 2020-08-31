#include "Header.h"

int main() {
	int iValue = 0, iRet=0;
	printf("Enter the standard: ");
	scanf("%d", &iValue);
	iRet = SchoolFees(iValue);
	if(iRet == -1) {
		printf("Error: Check Standard\n");
		return -1;
	}
	printf("School fees: %d\n", iRet);
	
	return 0;
}
