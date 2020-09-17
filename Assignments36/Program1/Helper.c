#include "Header.h"

/* WAP which accepts 2 stringd from user and concat N characters of second string after first string.
Value of N shold be accepted from user. (Implement strncat() function).
Note: If third parameter is greater than the size of second string then concat whole string after first string. */

/*Input : "Vivek Doke"
		  " - Software Developer"
		  21

  Output: Vivek Doke - Software Developer
*/

void StrNCatX(char *src, char *dest, int iCnt) {
	if((src == NULL) || (dest == NULL)) {
		return;
	}
	while(*src != '\0') {
		src++;
	}
	while((*dest != '\0') && (iCnt != 0)) {
		*src = *dest;
		src++;
		dest++;
		--iCnt;
	}
	*src = '\0';
}
