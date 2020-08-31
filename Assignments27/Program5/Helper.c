#include "Header.h"

void Reverse(char *str) {
	int iCnt = 0;
	char *temp = str;
	if(!*str) {
		return;
	}
	while(*str != '\0') {
		iCnt++; 	
		*str++;
	}
	while(iCnt != 0) {
		printf("%c",*(temp+iCnt-1));
		iCnt--;	
	}
	printf("\n");
}
