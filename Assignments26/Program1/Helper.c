#include "Header.h"

void DisplayASCII() {
	int iCnt = 0;
	for(iCnt = 0; iCnt<256; iCnt++) {
		printf("%d %x %c\n",iCnt, iCnt, iCnt);
	}
}
