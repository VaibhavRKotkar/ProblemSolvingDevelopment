/*
4. Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/

#include<stdio.h>

void Pattern(int iNo)
{
   register int iCnt= 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
           // printf("# ");
            printf("#  %d  * ",iCnt);
            // printf("* ");
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