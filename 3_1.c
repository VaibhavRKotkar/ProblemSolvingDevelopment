// write a program which accepts one no from user an print that no of even nos on screen.
#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    if(iNo <=0)
    {
     return;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        iAns = (2*(iCnt +1));
       printf("%d\t",iAns);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number:\t");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}