#include "Header.h"

int main() {
	char arr[80] = "Vivek Doke";
	char brr[40] = "Vivek Doke Pune";
	int iCnt = 10;
	BOOL bRet = FALSE;
	
	bRet = StrNCmpX(arr, brr, iCnt);
	
	if(bRet) {
		printf("TRUE\n");
	}
	else {	
		printf("FALSE\n");
	}
	return 0;
}
