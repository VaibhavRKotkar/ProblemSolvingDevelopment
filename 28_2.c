//2. Accept string from user and copy that string into another string by removing whitespaces.
#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
       while(*src!= '\0')
    {
        if(*src != ' ')
        {
           *dest = *src;
           dest++;
        }
         src++;

    }
    *dest = '\0';
}

int main()
{
    char Arr[25];
    char Brr[25];

    printf("Enter string: ");
    fgets(Arr,25,stdin);

    StrCpyX(Arr,Brr);

    printf("Modified String is: %s",Brr);
    return 0;
}