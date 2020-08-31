#include "Header.h"

int main() {
	int iAmount = 0;
	float finalAmount = 0;
	printf("Enter income amount: ");
	scanf("%d",&iAmount);

	finalAmount = IncomeTax(iAmount);
	
	printf("Tax amount: %f\n", finalAmount);
	return 0;
}
