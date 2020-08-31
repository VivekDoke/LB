#include "Header.h"

void StrCpyCap(char *src, char* dest) {
	if((src == NULL) || (dest == NULL)) {
		printf("Error:\n");
		return;
	}
	while(*src != '\0') {
		if((*src >= 'a') && (*src <= 'z')) {
			*dest = *(src)-32;
		}
		else {
			*dest = *src; 
		}
		++src;
		++dest;
	}
	*dest = '\0';
}
