#include "Header.h"

// Pattern

/*Input : "Vivek"

  Output: v
		  v i 
		  v i v 
		  v i v e 
		  v i v e k
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
			if((*temp >= 'A') && (*temp <= 'Z')) {
				*temp = *temp + 32;
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
