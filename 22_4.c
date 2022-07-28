// 4. Accept character from user and check that it is small alphabet or not
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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
        printf("It is small Alphabet");
   }
   else
   {
         printf("It is not a small Alphabet");
   }

    return 0;
}