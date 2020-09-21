#include "Header.h"

/* Write a recursive program which accept string from user and count white spaces.

	Input: HE llo WOr ID
	Output: 3
*/

int WhiteSpace(char *str) {
	if(*str == '\0') {
		return 0;
	}
	if(*str == ' ') {
		for(char c = *str; c == ' '; ++str) {
			c = *str;
		}
		return 1 + WhiteSpace(++str);
	}
	else {
		return WhiteSpace(++str);
	}
}
