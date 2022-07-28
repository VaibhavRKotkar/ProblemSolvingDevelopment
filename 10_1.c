// Accept N numbers form user and accept one another number as NO check whether NO is present or NOT.
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength, int iNo)
{
    BOOL bFlag = FALSE;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           bFlag = TRUE;
           break;
        }
    }
    return bFlag;
}
int main()
{
    int iSize = 0, iValue = 0, iRet = 0; int *p = NULL;
    register int iCnt = 0;
    BOOL bRet;

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
10_1.c
        printf("Enter another number:\t");
        scanf("%d",&iValue);

      bRet = Check(p,iSize,iValue);

      if(bRet == TRUE)
      {
        printf("Number is Present");
      }
       else
       {
            printf("Number is absent");
       }
        free(p);
    return 0;
}