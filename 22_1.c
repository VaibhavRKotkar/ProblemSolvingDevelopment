// 1. Accept character from user and check that it is alphabet or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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

   bRet = ChkAlpha(cValue);

   if(bRet == TRUE)
   {
        printf("It is character");
   }
   else
   {
         printf("It is not a character");
   }

    return 0;
}