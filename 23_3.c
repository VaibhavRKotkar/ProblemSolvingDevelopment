/* 3. accept character. if it is capital then display all the character from the input till Z.
 if it is small then display in reverse order upto a.oterwise return directly */

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c  ",ch);
            ch++;
        }

    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
         for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c  ",ch);
            ch--;
        }
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