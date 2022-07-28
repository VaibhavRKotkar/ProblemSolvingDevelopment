/* 4. accept character. and check whether it is special symbol or not.  */

#include<stdio.h>
#define TRUE 1
#define FALSE 0
 typedef int BOOL;

BOOL ChkSpecial(char ch)
{
   if((ch =='!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&')|| (ch == '*'))
   {
        return TRUE;
   }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is NOT a Special Character");
    }

    return 0;
}