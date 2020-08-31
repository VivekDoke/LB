#include "Header.h"

void StrRevX(char *str) {
	int iLength = 0;
	char temp = '\0';
	char* cstr = str;
	while(*cstr != '\0') {
		*cstr++;
		iLength++;
	}
	int iStart = 0;
	int iEnd = iLength - 1;
	while(iStart < iEnd) {
		temp = *(str+iEnd); 
		*(str + iEnd) = *(str + iStart);
		*(str + iStart) = temp;

		++iStart;
		--iEnd;
	}
}
