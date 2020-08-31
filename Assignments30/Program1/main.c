#include "Header.h"

int main() {
	char arr[30] = "Vivek Doke";
	char brr[30];

	StrCpyX(arr, brr);

	printf("%s\n",brr);
	
	return 0;
}
