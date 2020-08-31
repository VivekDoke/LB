#include "Header.h"

BOOL ChkVowel(char *str) {
	int iCnt = 0;

	if(!*str) {
		return -1;
	}
	while(*str != '\0') {
		if((*str == 65) || (*str == 97) || (*str == 69) || (*str == 101) || (*str == 73) || (*str == 105) || (*str == 79) || (*str == 111) || (*str == 85) || (*str == 117)) {
			iCnt++;
		}	
		*str++;
	}
	if(iCnt) {
		return TRUE;
	}
	return FALSE;
}
