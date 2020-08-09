#include "Header.h"

int main() {
	int iValue = 0, iRet = 0;
	
	printf("Enter distance: ");
	scanf("%d",&iValue);

	iRet = KMtoMeter(iValue);
	printf("%d\n",iRet);
	
	return 0;
}
