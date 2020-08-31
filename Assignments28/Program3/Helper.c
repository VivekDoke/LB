#include "Header.h"

void strtogglex(char *ostr) {
	int iCnt = 0;
	char *str = ostr;
	if(!*str) {
		printf("ERROR:");
		return;
	}
	while(*str != '\0') {
		if((*str >= 97) && (*str <=122)) {
			*str = *str-32;
		}		
		else if((*str >= 65) && (*str <=90)) {
			*str = *str+32;
		}
		printf("%c",*str);
		*str++;
	}
	printf("\n");
}
