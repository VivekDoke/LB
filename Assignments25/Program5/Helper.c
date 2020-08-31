#include "Header.h"

//////////////////////////////////////////////////
//
// Name: DisplaySchedule
// Description: Accept division of student from user
// and depends on the divion display exam timing. 
// There are 4 divions in school as A,B,C AND D.
// Exam of division A at 7 AM, B at 8.30 AM, C at
// 9.20 am  
// Input: character
// Output: Your exam at 9.20 AM
// Name: Vivek Shrihari Doke
// Date: 20 August 2020 
//
//////////////////////////////////////////////////

void DisplaySchedule(char chDiv) {
	if((chDiv == 65) || (chDiv == 97)) {
		printf("A at 7 AM");
	}
	if((chDiv == 66) || (chDiv == 98)) {
		printf("B at 7 AM");
	}
	if((chDiv == 67) || (chDiv == 99)) {
		printf("C at 7 AM");
	}
	if((chDiv == 68) || (chDiv == 100)) {
		printf("D at 10.30 AM");
	}
}
