#include "Header.h"

void DisplayDigit(char *str) {
	if(!*str) {
		printf("ERROR:");
		return;
	}
	while(*str != '\0') {
		if((*str >= 48) && (*str <=57)) {
			printf("%c",*str);
		}
		*str++;
	}
	printf("\n");
}
