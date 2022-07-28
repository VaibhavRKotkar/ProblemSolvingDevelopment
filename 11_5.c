// Accept N numbers from user and display summation of digits of each element
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
 int iCnt = 0, iTemp = 0;

    printf("Summation of digits are:");


 for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        iTemp = Arr[iCnt];

        int iSum = 0, iDigit = 0;       // important step (bcz it takes 1.30hr to find problem)

      while(Arr[iCnt] > 0)
        {
           iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
            printf("%d\t",iSum);

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