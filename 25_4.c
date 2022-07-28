//4 . Write a program and accept string from user and display only digits.
#include<stdio.h>

void DisplayDig(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
         str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    DisplayDig(arr);

    return 0;
}