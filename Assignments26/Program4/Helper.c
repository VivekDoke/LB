#include "Header.h"

BOOL ChkSpecial(char ch) {
	int iCnt = 0, iVal = 0;
	if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
       ch == '%' || ch == '^' || ch == '&' || ch == '*' ) {
		return TRUE;
	}
	return FALSE;
}
