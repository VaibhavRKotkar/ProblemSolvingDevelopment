// write a program which accepts number from user and check whether number it contain 0 in it or not.
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
{
   BOOL iDigit = FALSE;
    if(iNo< 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
     if(iDigit == 0)
      {
        return TRUE;
        break;
      }
        iNo = iNo/10;
    }
}

int main()
{
    int iValue = 0;
   BOOL bRet = FALSE;
    printf("Enter the Number:\t");
    scanf("%d",&iValue);

  bRet = ChkZero(iValue);
  if(bRet == TRUE)
  {
    printf(" It contains Zero");
  }
  else
  {
    printf("There is NO zero");
  }

    return 0;
}