#include "Header.h"

void StrCpyRev(char *src, char* dest) {

	if((src == NULL) || (dest == NULL)) {
		printf("Error: \n");
		return;
	}
	int iLength = 0;
	char* csrc = src;
	while(*csrc != '\0') {
		++iLength;
		csrc++;
	}
	while(iLength >= 0) {
		*++dest = *--csrc;
		--iLength;
	}
	*dest = '\0';
}
