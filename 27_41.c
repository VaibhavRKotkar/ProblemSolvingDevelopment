//4. Accept string in c use fgets method with stdin parameter.
#include<stdio.h>

int main()
{
    char Arr[25];
    char Brr[25];

    printf("Enter 1st string: ");
    fgets(Arr,25,stdin);

    printf("Enter 2nd string: ");
    fgets(Brr,25,stdin);

    printf("\nString Copied: %s",Arr);
    printf("\nString Copied: %s",Brr);

    return 0;
}