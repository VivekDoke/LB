#include "Header.h"

/*
Accept string from user and reverse the contents of that string by toggling the case.
*/

/*Input : aCBdef
  Output: FEDbcA
*/

void StrRevTogX(char *str) {
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
		if((temp >= 'a') && (temp <= 'z')) {
			temp = temp-32;
		}
		else if((temp >= 'A') && (temp <= 'Z')) {
			temp = temp+32;
		}
		if((*last >= 'a') && (*last <= 'z')) {
			*last = *last-32;
		}
		else if((*last >= 'A') && (*last<= 'Z')) {
			*last = *last+32;
		}
		*first = *last;
		*last = temp;
		first++;
		last--;
	}
}
