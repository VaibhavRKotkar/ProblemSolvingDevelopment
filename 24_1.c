// 1. Accept string and count number of Capital Letters
#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str!='\0')
    {
        if((*str >='A')&&(*str<= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);

    printf("Number of Capital Letters are: %d",iRet);

    return 0;
}