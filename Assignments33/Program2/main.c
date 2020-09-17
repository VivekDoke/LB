#include "Header.h"

int main()
{
    UINT iNo = 0;
    UINT uRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iNo);
    	
    uRet = OffBit(iNo);

    printf("%d\n",uRet);
    return 0;
}
