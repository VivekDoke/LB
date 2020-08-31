#include "Header.h"

void StrCpySmall(char *src, char* dest) {
	if(*src == '\0') {
		printf("Error:\n");
	}
	while(*src != '\0') {
		if((*src >= 'a') && (*src <= 'z')) {
			*dest = *src;
			dest++;
		}
		src++;
	}
	*dest = '\0';
}
