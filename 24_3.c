// 3. Accept string and return difference between small and capital letters.

#include<stdio.h>

int CountSmall(char *str)
{
    int iCntS = 0, iCntC = 0;

    while(*str!='\0')
    {
        if((*str >='a')&&(*str<= 'z'))
        {
            iCntS++;
        }
       else if((*str >='A')&&(*str<= 'Z'))
        {
            iCntC++;
        }
        str++;
    }
    return (iCntS - iCntC);
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String: ");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    if (iRet < 0)
    {
        iRet = -(iRet);
         printf("Number of difference between Lower & capital Letters are: %d",iRet);
    }
    return 0;
}