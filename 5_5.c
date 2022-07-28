// write a program which accepts number from user and display the multipication of factors.
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iAns = 0, iAns1 =0, iAns2 =0;


    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iAns =  iAns + iCnt;
        }
        else if((iNo % iCnt)!=0)
         {
            iAns1 =  iAns1 + iCnt;
        }
    }
     iAns2 = iAns - iAns1;

     return iAns2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\t");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

     printf("%d",iRet);

    return 0;
}