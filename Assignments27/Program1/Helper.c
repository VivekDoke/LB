#include "Header.h"

int CountCapital(char *str) {
	int iCnt = 0;

	if(!*str) {
		return -1;
	}
	while(*str != '\0') {
		if((*str >= 64) && (*str <=90)) {
			iCnt++;
		}
		*str++;
	}
	return iCnt;
}
