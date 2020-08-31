#include "Header.h"

int main() {
	int iValue = 0, iRet=0;
	printf("Enter the km: ");
	scanf("%d", &iValue);
	iRet = TouristBill(iValue);
	printf("Bill: %d\n", iRet);
	
	return 0;
}
