// 1. Checks whether 7th & 15th & 21st,28th bit is ON or OFF.
#include<stdio.h>
#define TRUE 1
#define FALSE 0;

typedef unsigned int UNIT;
typedef int BOOL;

BOOL ChkBit(UNIT iNo)
{
    int imask = 0X08104040;
    int bBit = iNo & imask;

  if(bBit == imask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    BOOL bRet;
    int bValue = 0;

    printf("Enter the Value: ");
    scanf("%d",&bValue);

    bRet = ChkBit(bValue);

    if(bRet == TRUE)
    {
        printf("BIt is ON");
    }
    else
    {
        printf("Bit is OFF");
    }

    return 0;
}