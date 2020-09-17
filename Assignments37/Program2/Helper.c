#include "Header.h"

/* 1.Write a program which accept string from user and return length of largest word */

/*Input : "Vivek Doke"

  Output: 5
*/

int WordCount(char *str) {
	int iCnt = 1;
	int ilargelength = 0;
	if(str == NULL) {
		return -1;
	}
	while(*str != '\0') {	
		if(*str == ' ') {
			iCnt = 0;
		}
		if(iCnt > ilargelength) {
			ilargelength = iCnt;
		}
		iCnt++;
		str++;
	}
	return ilargelength;
}
