// Accept N numbers form user and accept one another number as NO return index of first Occurrence of that No.
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength, int iNo)
{

    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iSize = 0, iValue = 0, iRet = 0; int *p = NULL;
    register int iCnt = 0;

    printf("Enter no of elements:\t");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements:\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element%d:\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
        printf("Enter another number:\t");
        scanf("%d",&iValue);

      iRet = FirstOcc(p,iSize,iValue);

      if(iRet == -1)
      {
        printf("There is no such number\n");
      }
      else
      {
        printf("Index of first occurrence of no is %d",iRet);
      }
        free(p);
    return 0;
}