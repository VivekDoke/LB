#include "Header.h"

void StrCpySmall(char *src, char* dest) {
	if((src == NULL) || (dest == NULL)) {
		printf("Error:\n");
		return;
	}
	while(*src != '\0') {
		if((*src >= 'A') && (*src <= 'Z')) {
			*dest = *(src)+32;
		}
		else {
			*dest = *src; 
		}
		++src;
		++dest;
	}
	*dest = '\0';
}
