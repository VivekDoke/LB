#include "Header.h"

int main() {
	int iValue = 0;

	char string[] = "vivek  doke   Pune Test";

	//printf("Enter string: ");
	//scanf("%['\n']c", string);

	iValue = WhiteSpace(string);

	printf("%d\n",iValue);
	return 0;
}
