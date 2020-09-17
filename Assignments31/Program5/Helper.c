#include "Header.h"

void StrCpyToggle(char *src, char* dest) {
	if((src == NULL) || (dest == NULL)) {
		printf("Error:\n");
		return;
	}

	while(*src != '\0') {
		if((*src >= 'a') && (*src <= 'z')) {
			*dest = *(src) - 32;
		}
		else if((*src >= 'A') && (*src <= 'Z')) {
			*dest = *(src) + 32;
		}
		else {
			*dest = *src;
		}
		*dest++;
		*src++;
	}
	*dest = '\0';
}
