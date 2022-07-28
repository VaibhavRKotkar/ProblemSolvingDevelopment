#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i,j = 0;
    if((((iRow %2)== 0) || (iCol %2)== 0))
    {
        printf("Odd input only");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j =1; j <= iCol; j++)
        {
            if(i == (iRow/2)+1 || j == (iCol/2)+1)
            {
                    printf("*  ");
            }
            else
        {
                printf("   ");
        }
        }

        printf("\n");
    }

}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows that you want to print: ");
    scanf("%d",&iValue1);

     printf("Enter the number of rows that you want to print: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}