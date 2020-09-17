#include "Header.h"

int main() {
	char arr[30] = "Marvellous Python";
	char brr[30];

	StrCpyRev(arr, brr);

	printf("%s\n",brr);
	
	return 0;
}
