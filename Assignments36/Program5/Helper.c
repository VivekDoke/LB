#include "Header.h"

/*
Accept string from user and check whether the string is pallindrome or not without considering its case.
*/

/*Input : 1abvvBA1
  Output: TRUE */

BOOL StrCmpX(char *src, char *dest) {
	
/*	if((src == NULL) || (dest == NULL)) {
		return TRUE;
	}*/
	while((*dest != '\0') && (*src != '\0')) {
		if(*src != *dest) {
			return FALSE;
		}
		src++;
		dest++;
	}
	if((*dest == '\0') && (*src == '\0')) {
        return TRUE;
    }
	printf("%c %c\n",*dest,*src);
	printf("pakada\n");
    return FALSE;
}

void StrPallindrome(char *str) {
	if(str == NULL) {
		return;
	}
	char *first, *last;
	first = str;
	last = str;
	int count = 0;
	while(*last != '\0') {
		last++;
		count++;
	}
	last--;
	char temp = '\0';
	char* output = (char*) malloc(sizeof(char)*count);
	char* ots = output; 
	while(first <= last) {
		temp = *first;
		if((temp >= 'a') && (temp <= 'z')) {
			temp = temp-32;
		}
		if((temp >= 'A') && (temp <= 'Z')) {
			temp = temp+32;
		}
		if((*last >= 'a') && (*last <= 'z')) {
			*last = *last-32;
		}
		if((*last >= 'A') && (*last<= 'Z')) {
			*last = *last+32;
		}
		if((*str >= 'a') && (*str <= 'z')) {
			*str = *str-32;
		}
		if((*str >= 'A') && (*str<= 'Z')) {
			*str = *str+32;
		}
		*output = *last;
		*last = temp;
		output++;
		str++;
		last--;
	}
/*	printf("\n");
	while(*str != '\0'){
		printf("%c",*str);
		*str++;
	}
	printf("\n");
	while(*ots != '\0'){
		printf("%c",*ots);
		*ots++;
	}*/
	printf("\n");
	BOOL test = StrCmpX(str, ots);
	if(test == TRUE) {
		printf("Palindrome string\n");
	}
	else {
		printf("Not a Palindrome string\n");
	}
}
