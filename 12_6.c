/*
5. Accept number from user and display below pattern.
Input : 8
Output : 3 6 9 12 15 18 21 24
*/

#include<stdio.h>

void Pattern(int iNo)
{
   register int iCnt;

    for(iCnt = 1; iCnt <= (iNo*3); iCnt++)
        {
            iCnt = iCnt++;
            if((iCnt %3)== 0)
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