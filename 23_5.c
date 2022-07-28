// 5. Accept character and display its value in decimal , octal, and hexadecimal format.

#include<stdio.h>


void Display(char ch)
{
   if((ch >= 0) && (ch <= 255))
   {
        printf("Character in Decimal: %d\n",ch);
        printf("Character in lowercase Hexadecimal: 0X%x\n",ch);
        printf("Character in Uppercase Hexadecimal: 0X%X\n",ch);
        printf("Character in octal: %o\n",ch);
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