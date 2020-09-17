#include "Header.h"

/* Write a program which accept string from user and replace each occurrence of first character of each word into capital case.

/*Input : "Vivek doke pune"
  Output: "Vivek Doke Pune"
*/

void StrCap(char *src) {
	if(src == NULL) {
		return;
	}
	int isspace = 0;
	while(*src != '\0') {
		if(*src == ' ') {
			if((*(src+1) >= 'a') && (*(src+1) <= 'z')) {
		*(src+1) == *(src+1)+32;
		}
	}	
		src++;
	}
}
