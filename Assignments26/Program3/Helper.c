#include "Header.h"

void Display(char ch) {
	int iCnt = 0, iVal = 0;
	if((ch >= 65) && (ch <= 96)) {
		while(iVal <= 89) {
			iVal = ch + iCnt;
			printf("%c ",iVal);
			++iCnt;
		}
	}	
    else if((ch >= 97) && (ch <= 122)) {
		iVal = 98;
		while(iVal > 97) {
			iVal = ch - iCnt;
			printf("%c ",iVal);
			++iCnt;
		}
	}
	else {
		printf("%c\n",ch);
	}

	printf("\n");
}
