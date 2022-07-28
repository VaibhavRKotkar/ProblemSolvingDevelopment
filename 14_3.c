/*
3. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output : A A A A A
         B B B B B
         C C C C C
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    register int i =0, j = 0;
    
     if(iRow < 0)
    {
         iRow = -iRow;
    }
     if(iCol < 0)
    {
         iCol = -iCol;
    }

   char Alphabet = 'A';

    for(i= 1; i <= iRow; i++)
    {


        for(j = 1; j <= iCol; j++)
        {
            printf("%c   ",Alphabet);
        }
        printf("\n");
        Alphabet++;
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:");
    scanf("%d", &iValue1);

    printf("Enter number of columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}