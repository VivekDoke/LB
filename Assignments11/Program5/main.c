#include "Header.h"

int main() {
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter starting point: ");
	scanf("%d",&iValue1);

	printf("Enter ending point: ");
	scanf("%d",&iValue2);

	RangeDisplayRev(iValue1, iValue2);

	return 0;
}
