#include "Header.h"

void StrCpyX(char *src, char* dest) {
	if((src == NULL) || (dest == NULL)) {
		printf("Error:\n");
		return;
	}

	while(*src != '\0') {
		if(*src == ' ') {
			src++;
			continue;
		}
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
