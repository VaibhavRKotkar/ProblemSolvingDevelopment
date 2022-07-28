// write a program which accepts number from user and return multiplication of all digits.
#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
     int iAns = 1;

    if(iNo < 0)
      {
          iNo = -iNo;
      }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
       iAns = iAns * iDigit;
        iNo = iNo / 10;
    }
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\t");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);
    printf("%d\n", iRet);

    return 0;
}