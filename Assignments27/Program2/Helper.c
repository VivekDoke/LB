#include "Header.h"

int CountSmall(char *str) {
	int iCnt = 0;

	if(!*str) {
		return -1;
	}
	while(*str != '\0') {
		if((*str >= 95) && (*str <= 121)) {
			iCnt++;
		}
		*str++;
	}
	return iCnt;
}
