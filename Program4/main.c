#include "Header.h"

int main() {
	char arr[30] = "Vivek Doke.. Logic Building";
	char brr[30];

	StrCpySmall(arr, brr);

	printf("%s\n",brr);
	
	return 0;
}
