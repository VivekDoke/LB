#include "Header.h"

int main() {
	int iVal = 0;
	BOOL bRet = FALSE;

	printf("Enter number: ");
	scanf("%d",&iVal);

	bRet = Check(iVal);

	if(bRet == TRUE) {
		printf("Divisble by 5\n");
	}
	else {
		printf("Not Divisible by 5\n");
	}
	return 0;
}
