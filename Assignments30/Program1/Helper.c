#include "Header.h"

void StrCpyX(char *src, char* dest) {
	if(*src == '\0') {
		printf("Error:\n");
	}
	while(*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}
