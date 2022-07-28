// write a program which accept one number from user and print even factor of that number.
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <=0)
    {
     iNo= -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
       if(iNo % i == 0)
       {
       if(i % 2 == 0)
       {
        printf("%d\t",i);
        }
       }
    }
}

int main()
{
    int iValue = 0;

     printf("Enter number:\t");
     scanf("%d", &iValue);
    DisplayFactor(iValue);
    return 0;

}