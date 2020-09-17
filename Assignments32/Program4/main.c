#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    bRet = CheckBit(iNo);

    if(bRet == TRUE) {
        printf("7th, 8th and 9th bit is on\n");
    }
    else {
        printf("One of the bit (7, 8 and 9) are off\n");
    }
    return 0;
}
