// Accept N numbers from user and accept one another number as No and return frequency of NO from it.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    register int iCnt = 0, iCount =0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
          iCount++;
        }

    }
        return iCount;
 }


int main()
{
    int iSize = 0, iValue = 0; int *p = NULL;
    register int iCnt = 0;
    int iRet = 0;

    printf("Enter no of elements:");
    scanf("%d",&iSize);

    printf("Enter the number:");
    scanf("%d",&iValue);

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
    iRet = Frequency(p,iSize, iValue);

    printf("%d",iRet);

    free(p);

    return 0;
}