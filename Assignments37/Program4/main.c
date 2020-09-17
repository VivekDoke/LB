#include "Header.h"

int main() {
	char arr[80] = "Vivek       Doke     Pune";
	char brr[40] = " ";

	StrCpyX(arr, brr);
	printf("%s\n", brr);
	
	return 0;
}
