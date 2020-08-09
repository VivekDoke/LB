#include "Header.h"

int main() {
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter radius: ");
	scanf("%f",&fValue);

	dRet = CircleArea(fValue);
	printf("Area of circle: %f\n",dRet);

	return 0;
}
