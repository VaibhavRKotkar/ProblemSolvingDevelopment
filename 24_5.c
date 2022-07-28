// 2. Accept string and display it in reverse order.
#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end!='\0')
    {
            end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;    // swap logic
        *start = *end;     // swap logic
        *end = temp;      // swap logic

        start++;
        end--;
    }
}
int main()
{
    char arr[20];

    printf("Enter the String: ");
    scanf("%[^'\n']s",arr);

        Reverse(arr);

        printf("String after Reverse: %s",arr);

    return 0;
}