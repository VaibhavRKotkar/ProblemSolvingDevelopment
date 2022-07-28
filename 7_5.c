// write a program which accepts number from user and return multiplication of all digits.
#include<stdio.h>

int CountDiff(int iNo)
{
     int iDigit = 0;
     int  iEvenSum = 0;
     int  iOddSum = 0;

    if(iNo < 0)
      {
          iNo = -iNo;
      }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else if((iDigit % 2)!=0)
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }

    return(iEvenSum - iOddSum);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\t");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}