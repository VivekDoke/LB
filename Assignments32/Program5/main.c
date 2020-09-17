#include "Header.h"

int main()
{
    int iNo = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    bRet = CheckBit(iNo);

    if(bRet == TRUE) {
        printf("First and last bit(1 and 32) are on\n");
    }
    else {
        printf("First and last bit(1 and 32) are off\n");
    }
    return 0;
}
