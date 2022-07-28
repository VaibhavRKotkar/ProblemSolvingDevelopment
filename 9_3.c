// Accept N numbers from user and check whether that number contain 11 in it or not.
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL Check(int Arr[], int iLength)
{
    register int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }

 }


int main()
{
    int iSize = 0; int *p = NULL;
    register int iCnt = 0;
    BOOL bRet;

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
    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
   else
   {
        printf("11 is Absent");
   }

    free(p);

    return 0;
}