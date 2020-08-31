#include "Header.h"
#include <stdlib.h>

int main() {
	int iSize = 0,iRet = 0,iCnt = 0, iStart = 0, iLast = 0;
	int *p = NULL;

	printf("Enter number of elements: ");
	scanf("%d",&iSize);

	printf("Enter the starting point: ");
	scanf("%d",&iStart);

	printf("Enter the ending point: ");
	scanf("%d",&iLast);

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
	
	Range(p, iSize, iStart, iLast);
	
	free(p);
	
	return 0;
}
