#include "Header.h"

BOOL ChkChar(char *str, char ch) {
	if(!*str) {
		printf("ERROR:");
		return FALSE;
	}
	while(*str != '\0') {
		if(*str == ch) {
			return TRUE;
		}
		*str++;
	}
	return FALSE;
}
