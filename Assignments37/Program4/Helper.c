#include "Header.h"

/* WAP which accepts 2 strings from user and copy the contents into another string by remving extra white spaces.


/*Input : "Vivek     Doke  Pune"
		  "Vivek Doke Pune"

  Output: TRUE
*/

void StrCpyX(const char *src, char *dest) {
	if(src == NULL) {
		return;
	}
	int space = 0;
	while(*src != '\0') {
		if(*src != ' ') {	
			*dest = *src;
			dest++;
			space = 0;
		}
		else {
			if(space == 0) {
				*dest = *src;
				dest++;
				space++;
			}
			src++;
			continue;
		}
	
		src++;
	}
	*dest = '\0';
}
