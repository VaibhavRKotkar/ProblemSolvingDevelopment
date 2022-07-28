#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
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

     printf("Enter character:\t");
     scanf("%c", &cValue);

     bRet = ChkVowel(cValue);
     if(bRet == TRUE)
     {
        printf("It is vowel");
     }
   else
   {
       printf("it is not vowel");
   }
  return 0;

}
