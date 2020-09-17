#include "Header.h"

/*
Accept string from user and reverse the contents of that string in place.
*/

/*Input : aCBdef
  Output: fedBCa
*/

void StrWrdRev(char *str) {
	if(str == NULL) {
		return;
	}
	char *first, *last;
	first = str;
	last = str;
	while(*last != '\0') {
		last++;
	}
	last--;
	char temp = '\0';
	while(first <= last) {
		temp = *first;
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
