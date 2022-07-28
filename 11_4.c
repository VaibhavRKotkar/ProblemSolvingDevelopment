// Accept N numbers from user and display all such numbers which contains 3 digits init.
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
 int iCnt = 0, iTemp = 0;

    printf("Three digit numbers are:");


 for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        iTemp = Arr[iCnt];

        int iCount = 0;       // important step (bcz it takes 1.30hr to find problem)

      while(Arr[iCnt] > 0)
        {
            iCount++;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        if(iCount == 3)
        {
            printf("%d\t",iTemp);
        }
   }
}

int main()
{
   int iSize = 0;
   int *p = NULL;
   register int iCnt = 0;

   printf("Enter the number of elements:");
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
   Digits(p,iSize);


    free(p);

    return 0;
}