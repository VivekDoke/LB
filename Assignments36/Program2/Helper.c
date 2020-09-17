#include "Header.h"

/* WAP which accepts 2 stringd from user and check whether contents of two strings are equal or not.

Note: Implement strcmp() function */

/*Input : "Vivek Doke"
		  "Vivek Doke"

  Output: TRUE
*/

BOOL StrCmpX(char *src, char *dest) {
	if((src == NULL) || (dest == NULL)) {
		return FALSE;
	}
	while((*dest != '\0') && (*src != '\0')) {
		if(*src != *dest) {
			return FALSE;
		}
		src++;
		dest++;
	}
	if((*dest == '\0') && (*src == '\0')) {
		return TRUE;	
	}
	return FALSE;
}
