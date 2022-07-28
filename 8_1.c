// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iEvenSum = 0, iOddSum = 0, iAns = 0;
    register int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else if((Arr[iCnt] % 2) != 0)
         {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    iAns = iEvenSum - iOddSum;
    return iAns;
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
    iRet = Difference(p,iSize);
    printf("Result is: %d",iRet);

    free(p);
    return 0;
}