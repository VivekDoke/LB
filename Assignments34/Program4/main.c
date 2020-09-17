#include "Header.h"

int main()
{
    UINT iNo = 0, iPos = 0;
    UINT uRet = 0;
    
    printf("Enter number: ");
    scanf("%d",&iNo);
    	
    printf("Enter the positin: ");
    scanf("%d",&iPos);
    
	uRet = ToggleBit(iNo, iPos);

    printf("%d\n",uRet);
    return 0;
}
