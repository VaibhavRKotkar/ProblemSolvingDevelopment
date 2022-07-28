//4. Accept string from user and copied Small Letters into another string.
#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
   while(*src != '\0')
   {
    if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
  }
    *dest = '\0';
}
int main()
{
    char Arr[25];
    char Brr[25];

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    StrCpySmall(Arr,Brr);

    printf("String Copied: %s",Brr);

    return 0;
}