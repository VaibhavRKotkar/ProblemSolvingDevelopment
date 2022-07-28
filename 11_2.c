// Accept N numbers from user and return the smallest number.
#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iLength)
{
    int iCnt = 0, iMin = Arr[0];

    for(iCnt= 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
     return iMin;
}
int main()
{
   int iSize = 0, iRet = 0;
   int *p = NULL;
   register int iCnt = 0;

   printf("Enter the number of elements\n");
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
    printf("Enter %d element:",iCnt+1);
    scanf("%d",&p[iCnt]);
}
iRet = Minimum(p,iSize);
    printf("Smallest number is %d",iRet);
    free(p);

    return 0;
}