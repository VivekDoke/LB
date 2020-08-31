#include "Header.h"

void strlwrx(char *ostr) {
	int iCnt = 0;
	char *str = ostr;
	if(!*str) {
		printf("ERROR:");
		return;
	}
	while(*str != '\0') {
		if((*str >= 64) && (*str <=90)) {
			*str = *str+32;
		}
		printf("%c",*str);
		*str++;
	}
	printf("\n");
}
