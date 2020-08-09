#include "Header.h"

int main() {
	int iValue = 0, iRet = 0;
	
	printf("Enter number: ");
	scanf("%d",&iValue);

	iRet = OddFactorial(iValue);
	
	printf("Even Factorial : %d\n",iRet);
	return 0;
}
