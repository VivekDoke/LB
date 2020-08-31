#include "Header.h"

void Display(char ch) {
	if((ch >= 65) && (ch <= 96)) {
		printf("%c\n",ch+32);
	}	
    else if((ch >= 97) && (ch <= 122)) {
		printf("%c\n",ch-32);
	}
	else {
		printf("%c\n",ch);
	}
}
