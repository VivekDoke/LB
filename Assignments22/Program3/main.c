#include "Header.h"
#include <stdlib.h>

int main() {
	int iSize = 0,iRet = 0,iCnt = 0;
	int *p = NULL;
	BOOL bRet = FALSE;
	printf("Enter number of elements: ");
	scanf("%d",&iSize);
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL) {
		printf("Unable to allocate memory");
		return -1;
	}		
	printf("Enter %d elements\n",iSize);
	for(iCnt = 0; iCnt<iSize; iCnt++) {
		printf("Enter element : %d ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}	
	bRet = Check(p, iSize);
	if(bRet == TRUE) {
		printf("11 is present\n");
	}
	else {
		printf("11 is absent\n");
	}
	free(p);
	return 0;
}
