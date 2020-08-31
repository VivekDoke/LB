#include "Header.h"

int main() {
	int iAmount = 0;
	int finalAmount = 0;
	printf("Enter bill amount: ");
	scanf("%d",&iAmount);

	finalAmount = CalculateBill(iAmount);
	
	printf("Bill after discount: %d\n", finalAmount);
	return 0;
}
