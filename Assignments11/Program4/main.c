#include "Header.h"

int main() {
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter starting point: ");
	scanf("%d",&iValue1);

	printf("Enter ending point: ");
	scanf("%d",&iValue2);

	iRet = RangeSumEven(iValue1, iValue2);
	
	if(iRet) {
		printf("Addition is %d\n",iRet);
	}
	return 0;
}
