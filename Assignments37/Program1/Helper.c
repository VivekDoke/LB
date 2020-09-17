#include "Header.h"

/* 1.Write a program which accept string from user count number of
words from string */

/*Input : "Vivek Doke"

  Output: 2
*/

int WordCount(char *str) {
	int iCnt = 1;
	if(str == NULL) {
		return -1;
	}
	while(*str != '\0') {
		if((*str == ' ') && (*(str+1) != ' ')) {
			iCnt++;	
		}
		str++;
	}
	return iCnt;
}
