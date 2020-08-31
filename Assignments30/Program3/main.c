#include "Header.h"

int main() {
	char arr[30] = "Vivek Doke.. erfer. ert er";
	char brr[30];

	StrNCpyX(arr, brr, 5);

	printf("%s\n",brr);
	
	return 0;
}
