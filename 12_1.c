/*
1. Accept number from user and display below pattern.
Input : 5
Output : A B C D E
*/
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt =0;
    char cAlphabet = 'A';

    for(iCnt =1; iCnt <= iNo; iCnt++)
        {
            printf("%c  ",cAlphabet);
            cAlphabet++;
        }
}
int main()
{
    int iValue = 0;

    printf("Enter the number of alphabet you want to print: ");
    scanf("%d",&iVa;iValue);

    Pattern(iValue);

    return 0;
}