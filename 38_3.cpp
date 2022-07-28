// write a recursive program to accept string from user and count number 0f character.
// input: HELLO
// output: 5
#include<stdio.h>

int StrLen(char *str)
{
    static int iCnt = 0;
    if(*str != '\0')
    {
       iCnt++;
       str++;
       StrLen(str);
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%s",Arr);

    iRet = StrLen(Arr);
    printf("String Length is: %d",iRet);


    return 0;
}

