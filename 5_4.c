// write a program which accepts number from user and returns summation of it's non factors.
#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iAns = 0;

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
          iAns = iAns + iCnt;
        }
    }
    return iAns;
}
int main()
{
     int iValue = 0;
    int iRet = 0;
     printf("Enter number");
     scanf("%d",&iValue);

     iRet = SumNonFact(iValue);
     printf("%d", iRet);
     return 0;
}
