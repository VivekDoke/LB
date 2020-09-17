#include "Header.h"

/* WAP which accepts 2 stringd from user and check whether first N contents of two strings are equal or not. (Implement strncmp() function).

Note: If third parameter is greater than the size of
second string then concat whole string after first string.*/

/*Input : "Vivek Doke"
		  "Vivek Doke - Software"
		   10

  Output: TRUE
*/

BOOL StrNCmpX(char *src, char *dest, int iCnt) {
	int iTemp = 1;
	if((src == NULL) || (dest == NULL)) {
		return TRUE;
	}
	while((*dest != '\0') && (*src != '\0')) {
		if(*src != *dest) {
			return FALSE;
		}
		if((*dest == *src) && (iCnt == iTemp)) {
			return TRUE;
		}
		src++;
		dest++;
		iTemp++;
	}
	return FALSE;
}
