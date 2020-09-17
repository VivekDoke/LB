#include "Header.h"

int main() {
	int iNo = 0, iPos1 = 0, iPos2 = 0;
	UINT uRet = 0;
	scanf("%d %d %d", &iNo, &iPos1, &iPos2);
	
	uRet = ToggleBitRange(iNo, iPos1, iPos2);	
	
	printf("%d\n", uRet);
	return 0;
}
