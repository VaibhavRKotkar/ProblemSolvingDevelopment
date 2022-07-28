/*
5. Accept number from user and display below pattern.
Input : 8
Output : 2 4 6 8 10 12 14 16
*/

#include<stdio.h>

void Pattern(int iNo)
{
   register int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo*2); iCnt++)
        {
            iCnt = iCnt++;
            if((iCnt %2)== 0)
            {
                printf("%d ",iCnt);
            }

        }
}
int main()
{
    int iValue = 0;

    printf("Enter the number of element: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}