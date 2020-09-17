#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    bRet = CheckBit(iNo);

    if(bRet == TRUE) {
        printf("5th and 18th bit is on\n");
    }
    else {
        printf("One of the bit (5 or 18) are off\n");
    }
    return 0;
}
