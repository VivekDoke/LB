#include<stdio.h>

/////////////////////////////////////////////////////
//
// Description: WAP which accept name from user and 
//				print that same.
// Author: Vivek Doke
// Date: 03 August 2020
// 
/////////////////////////////////////////////////////
int main() {
	char cName[30];
	printf("Please enter full name: ");
	scanf("%[^\n]", cName);
	
	printf("Your name is %s\n.", cName);
	return 0;
}
