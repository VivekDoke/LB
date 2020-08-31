#include "Header.h"

int Difference(char *str) {
	int iCntSmall = 0;
	int iCntCap = 0;

	if(!*str) {
		return -1;
	}
	while(*str != '\0') {
		if((*str >= 95) && (*str <= 121)) {
			iCntSmall++;
		}
		
		if((*str >= 65) && (*str <= 90)) {
			iCntCap++;
		}
	
		*str++;
	}
	return iCntSmall - iCntCap;
}
