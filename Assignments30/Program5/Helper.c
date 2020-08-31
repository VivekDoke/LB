#include "Header.h"

void StrCatX(char *src, char* dest) {
	if(*src == '\0') {
		printf("Error:\n");
	}
	while(*src != '\0') {
		src++;
	}
	while(*dest != '\0') {
		*src++ = *dest++;
		//dest++;
		//src++;
	}
	*dest = '\0';
}
