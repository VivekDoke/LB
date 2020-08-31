#include "Header.h"

void StrNCpyX(char *src, char* dest, int iCnt) {
	if(*src == '\0') {
		printf("Error:\n");
	}
	while((*src != '\0') && (iCnt != 0)) {
		*dest = *src;
		src++;
		dest++;
		iCnt--;
	}
	*dest = '\0';
}
