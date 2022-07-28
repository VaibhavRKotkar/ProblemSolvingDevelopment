//1. Accept string from user and copy that string into another string in reverse order.
#include<stdio.h>

void StrCpy(char *src, char *dest)
{

       char *start = src;
       char *end  = src;
       char Temp;
       while(*end != '\0')
       {
            end++;
       }
       end--;
       while(start < end)
       {
            Temp = *start;
            *start = *end;
            *end = Temp;
            start++;
            end--;
       }
       while(*src!= '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[25];
    char Brr[25];

    printf("Enter string: ");
    fgets(Arr,25,stdin);

    StrCpy(Arr,Brr);

    printf("Modified String is: %s",Brr);
    return 0;
}