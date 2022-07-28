// Accept two numbers from user and check whether that number is even or odd.
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue  = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:\t");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d Number is even\n", iValue);
    }
    else
    {
        printf("%d is odd number\n", iValue);
    }
    return 0;
}