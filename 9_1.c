// Accept N numbers from user and return frequency of even numbers.
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
   int iAns = 0, iCount = 0;
    register int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }

    }

    return iCount;
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
    iRet = CountEven(p,iSize);
    printf("Result is: %d",iRet);

    free(p);
    return 0;
}