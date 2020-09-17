#include "Header.h"

// Pattern

/*Input : "Vivek"

  Output: V i v e k
		  V i v e k
		  V i v e k
		  V i v e k
		  V i v e k	
*/

void Pattern(char *str) {
	int iLen = 0, i=0;
	char *temp = str;
	while(*temp != '\0') {
		iLen++;
		temp++;
	}
	while(i < iLen) {
		temp = str;
		while(*temp != '\0') {
			printf("%c ",*temp);
			temp++;
		}
		printf("\n");
		i++;
	}
}
