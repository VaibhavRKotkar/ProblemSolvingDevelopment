// 4. Accept string and check whether it contains vowel or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
       while(*str != '\0')
       {
            if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
            {
                break;
            }
            str++;
       }
      if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
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
    char arr[20];
    BOOL bRet = 0;

    printf("Enter the String: ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}