//3. Accept string from user and copied Capital Letters into another string.
#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
   while(*src != '\0')
   {
    if((*src >= 'A') && (*src <= 'Z'))
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

    StrCpyCap(Arr,Brr);

    printf("String Copied: %s",Brr);

    return 0;
}