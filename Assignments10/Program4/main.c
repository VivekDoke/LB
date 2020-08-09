#include "Header.h"

int main() {
	float fValue = 0.0;
	double dRet = 0.0;

	printf("Enter temperature in farenheit: ");
	scanf("%f",&fValue);

	dRet = FhtoCs(fValue);
	printf("%f\n",dRet);
	return 0;
}
