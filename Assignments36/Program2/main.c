#include "Header.h"

int main() {
	char arr[80] = "Vivek Doke";
	char brr[40] = "23Vivek Doke";

	BOOL bRet = FALSE;
	
	bRet = StrCmpX(arr, brr);
	
	if(bRet) {
		printf("TRUE\n");
	}
	else {	
		printf("FALSE\n");
	}
	return 0;
}
