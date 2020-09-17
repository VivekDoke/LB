#include "Header.h"

int main() {
	char arr[80] = "Vivek Doke";
	char brr[40] = " - Software Developer";
	
	StrNCatX(arr, brr, 21);
	
	printf("%s\n", arr);

	return 0;
}
