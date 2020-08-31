#include "Header.h"
#include <stdlib.h>

int main() {
	int iSize = 0,iRet = 0,iCnt = 0, iNo = 0;
	int *p = NULL;
	printf("Enter number of elements: ");
	scanf("%d",&iSize);

	printf("Enter the number: ");
	scanf("%d",&iNo);
	
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
	bRet = Check(p, iSize, iNo);
	printf("%d\n",bRet);
	free(p);
	return 0;
}
