// 1. Accept String from user and Copied into another string.
#include<stdio.h>

void StrCpy(char *src, char *dest)
{
    while(*src != '\0')
    {
         *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    StrCpy(Arr,Brr);

    printf("String Copied: %s",Brr);

    return 0;
}