#include "Header.h"

/* Write a recursive program which accept string from user and count white spaces.

	Input: HlloWOrID
	Output: 4
*/

int Small(char *str) {
	if(*str == '\0') {
		return 0;
	}
	if((*str >= 'a') && (*str <= 'z')) {
		for(char c = *str; c == ' '; ++str) {
			c = *str;
		}
		return 1 + Small(++str);
	}
	else {
		return Small(++str);
	}
}
