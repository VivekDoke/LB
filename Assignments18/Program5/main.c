#include "Header.h"

int main() {
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter number of rows and columns: ");
	scanf("%d %d",&iValue1, &iValue2);

	Pattern(iValue1, iValue2);

	return 0;
}
