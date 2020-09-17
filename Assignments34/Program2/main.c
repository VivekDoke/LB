#include "Header.h"

int main()
{
    UINT iNo = 0, iPos = 0;
    UINT uRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iNo);
   
	printf("Enter the position: ");
    scanf("%d",&iPos);
   
    uRet = OffBit(iNo, iPos);
	
    printf("%d\n",uRet);
    return 0;
}
