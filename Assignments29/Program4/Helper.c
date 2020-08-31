#include "Header.h"

int LastChar(char *str, char ch) {
	/*int iLength = 0;
	char *cstr = str;
	if(!*str) {
		printf("ERROR:");
		return -1;
	}
	while(*str != '\0') {
		iLength++;
		str++;
	}
	int iTemp = iLength;
	while(iLength >= 0) {
		if(*cstr == ch) {
			return iLength;
		}
		*cstr = *(cstr+iLength-1);
		--iLength;
	}
	return -1;*/
	int iCount = 0;
	int iIndex = -1;
	while(*str != '\0') {
		if(*str == ch) {
			iIndex = iCount;
		}
		iCount++;
		str++;
	}
	if(iIndex >= 0) {
		return iIndex;
	}
	return -1;
}
