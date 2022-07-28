//5. Accept string from user and copy that string into another string by toggling the characters.
#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
       while(*src!= '\0')
    {
          if(*src >= 'A' && *src <= 'Z')
          {
            *src = *src + 32;
          }
          else if(*src >= 'a' && *src <= 'z')
          {
            *src = *src - 32;
          }
           *dest = *src;
           dest++;
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

    StrCpyCap(Arr,Brr);

    printf("Modified String is: %s",Brr);
    return 0;
}