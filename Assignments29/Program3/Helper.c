#include "Header.h"

int FirstChar(char *str, char ch) {
	int iIndex = 0;
	if((*str == NULL) || (ch == '\0')) {
		printf("ERROR:");
		return -1;
	}
	while(*str != '\0') {
		if(*str == ch) {
			return iIndex;
		}
		++iIndex;
		*str = *(str+iIndex);
	}
	return -1;
}
