#include "Header.h"

int main() {
	char cValue = '\0';

	printf("Enter the character: ");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	printf("\n");
	return 0;
}
