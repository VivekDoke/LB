#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    bRet = CheckBit(iNo);

    if(bRet == TRUE) {
        printf("7th, 15th. 21th and 28th bit is on\n");
    }
    else {
        printf("One of the bit (7, 15, 21 and 28) are off\n");
    }
    return 0;
}
