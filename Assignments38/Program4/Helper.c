#include "Header.h"

// Pattern

/*Input : "Vivek"

  Output: V 
		  V I
		  V I V 
		  V I V E 
		  V I V E K
*/

void Pattern(char *str) {
	int iLen = 0, i=0, limit = 0;
	char *temp = str;
	while(*temp != '\0') {
		iLen++;
		temp++;
	}
	limit = 1;
	while(i < iLen) {
		temp = str;
		int j = 0;
		while(j<limit) {
			if((*temp >= 'a') && (*temp <= 'z')) {
				*temp = *temp - 32;
			}
			printf("%c ",*temp);
			temp++;
			j++;
		}
		printf("\n");
		i++;
		limit++;
	}
}
