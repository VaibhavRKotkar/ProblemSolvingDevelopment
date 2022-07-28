//2. Accept string from user and copied some indexed content into another string.
#include<stdio.h>

void StrCpy(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char Arr[25];
    char Brr[25];
    int iValue = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    printf("Enter Frequency Content: ");
    scanf("%d", &iValue);

    StrCpy(Arr,Brr,iValue);

    printf("String Copied: %s",Brr);

    return 0;
}