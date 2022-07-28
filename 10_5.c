// Accept N numbers form user and return product of all odd elements.
#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
   register int iCnt = 0;
   int iOddMult = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iOddMult =iOddMult * Arr[iCnt];
        }
    }
    return iOddMult;
}
int main()
{
    int iSize = 0, iValue1 = 0,iValue2 = 0, iRet = 0; int *p = NULL;
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

      iRet = Product(p,iSize);
      printf("Product is:%d",iRet);

        free(p);

    return 0;
}