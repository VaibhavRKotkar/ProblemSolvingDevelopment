// write a program which accepts number from user and display it's factors in decreasing order.
#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo-1); iCnt < iNo; iCnt--)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:\t");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}