#include "Header.h"

int main()
{
    int iNo = 0, iPos = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    
    printf("Enter the position\n");
    scanf("%d",&iPos);
        
    bRet = ChkBit(iNo, iPos);
    if(bRet == TRUE) {
        printf("Bit is on\n");
    }
    else {
        printf("Bits is Off\n");
    }
    return 0;
}
