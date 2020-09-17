#include "Header.h"

int main() {
	int iNo = 0;
	UINT iCountOne = 0;
	printf("Enter the number: ");	
	scanf("%d", &iNo);
	if(iNo < 0) {
		iNo = -iNo;
	}
	iCountOne = CountOne(iNo);
	printf("Number of 1's in Number%d are %d\n", iNo, iCountOne);
	return 0;
}
