#include "Header.h"

int DisplayOct(char ch) {
	int i = 1, oct = 0;

    while (ch != 0) {
        oct += (ch % 8) * i;
        ch /= 8;
        i *= 10;
    }
	return oct;
}

int DisplayHex(char ch) {	
	int i = 0, hex = 0;
	char hexDeciNum[100];

    while (ch != 0) {
		int temp = 0;
		temp = ch % 16;
    	if(temp < 10) {
			hexDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexDeciNum[i] = temp + 55;
			i++; 
		}
		ch = ch/16;
	}
	int j = 0;
	printf("Hexadecimal: 0X");
	for (j = i-1; j >=0; j--) {
		printf("%c", hexDeciNum[j]);
	}
	printf("\n");
}

void Display(char ch) {
	printf("Decimal: %d\nOctal: 0%d\n", ch, DisplayOct(ch));
	DisplayHex(ch);
}
