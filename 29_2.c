// 1. Checks whether 5th & 18th bit is ON or OFF.(both bitsshould be ON)
#include<stdio.h>
#define TRUE 1
#define FALSE 0;

typedef unsigned int UNIT;
typedef int BOOL;

BOOL ChkBit(UNIT iNo)
{
    int imask = 0X00020010;
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