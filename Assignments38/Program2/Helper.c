#include "Header.h"

// Pattern

/*Input : "Vivek"

  Output: V i v e k
		  V i v e 
		  V i v 
		  V i 
		  V	
*/

void Pattern(char *str) {
	int iLen = 0, i=0, limit = 0;
	char *temp = str;
	while(*temp != '\0') {
		iLen++;
		temp++;
	}
	limit = iLen;
	while(i < iLen) {
		temp = str;
		int j = 0;
		while(j<limit) {
			printf("%c ",*temp);
			temp++;
			j++;
		}
		printf("\n");
		i++;
		--limit;
	}
}
