/*
1. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : a b c d e
         1 2 3 4 5
         a b c d e
         1 2 3 4 5
         a b c d e
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    register int i =0, j = 0;
    char Alphabet = '\0';

     if(iRow < 0)
    {
         iRow = -iRow;
    }
     if(iCol < 0)
    {
         iCol = -iCol;
    }
    for(i= 1; i <= iRow; i++)
    {
         Alphabet = 'a';
        for(j = 1; j <= iCol; j++)
        {
          if((i%2)!=0)
          {
           printf("%c  ",Alphabet);

           }
            else if((i%2)==0)
            {
                printf("%d  ",j);
            }
            Alphabet++;
        }

        printf("\n");
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