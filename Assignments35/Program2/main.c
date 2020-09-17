#include "Header.h"

int main() {
	int iNo1 = 0, iNo2 = 0;
	UINT iCountOne = 0;
	printf("Enter the numbers: ");	
	scanf("%d %d", &iNo1, &iNo2);
	if((iNo1 < 0) || (iNo2 < 0)) {
		iNo1 = -iNo1;
		iNo2 = -iNo2;
	}
	CommonBits(iNo1, iNo2);
	return 0;
}
