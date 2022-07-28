// 3. Accept character from user and check that it is digit or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
   char cValue = '\0';
   BOOL bRet = FALSE;

   printf("Enter the character: ");
   scanf("%c",&cValue);

   bRet = ChkCapital(cValue);

   if(bRet == TRUE)
   {
        printf("It is a Digit");
   }
   else
   {
         printf("It is not a Digit");
   }

    return 0;
}