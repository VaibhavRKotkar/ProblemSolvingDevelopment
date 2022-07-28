// Accept N numbers from user and Display all such elements which are even and divisible by 5.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{

    register int iCnt = 0;

    printf("The numbers are even and Divisible by 5 are :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
     if((Arr[iCnt] % 2) == 0)
     {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
      }
    }
}
int main()
{
    int iSize = 0; int *p = NULL;
    register int iCnt = 0, iRet=0;
    printf("Enter no of elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element:\t", iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);

    free(p);

    return 0;
}