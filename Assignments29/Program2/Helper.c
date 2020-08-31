#include "Header.h"

int CountChar(char *str, char ch) {
	int iCount = 0;
	if(!*str) {
		printf("ERROR:");
		return -1;
	}
	while(*str != '\0') {
		if(*str == ch) {
			iCount++;
		}
		*str++;
	}
	return iCount;
}
