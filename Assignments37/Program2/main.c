#include "Header.h"

int main() {
	int iCnt = 0;
	char arr[80] = "Marvellous Info System";

	iCnt = WordCount(arr);
	printf("Largest word length: %d\n", iCnt);
	return 0;
}
