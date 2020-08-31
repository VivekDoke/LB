#include "Header.h"

int CountWhite(char *str) {
	int iCount = 0;
	if(!*str) {
		printf("ERROR:");
		return -1;
	}
	while(*str != '\0') {
		if((*str == 32)) {
			iCount++;
		}
		*str++;
	}
	return iCount;
}
