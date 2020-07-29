#include "Header.h"

int main() {
	int iValue = 0;
	int iCount = 0;

	printf("Enter number: ");
	scanf("%d", &iValue);

	printf("Enter frequency: ");
	scanf("%d", &iCount);
	
	Display(iValue, iCount);
	return 0;
}
