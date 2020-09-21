#include "Header.h"

/* Write a recursive program which accept string from
user and count number of characters.

	Input: Hello
	Output: 5
*/

int Strlen(char *str) {
	int static iLen = 0;
	if(*str != '\0') {
		iLen++;
		str++;
		Strlen(str);	
	}
	return iLen;
}
