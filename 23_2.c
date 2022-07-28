// 2. convert letters small to capital and vicevarsa, other characters should be as it is

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c",ch);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
         printf("%c",ch);
    }
    else
    {
            printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}