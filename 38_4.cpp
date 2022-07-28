// write a recursive program to accept number from user and return its factorial.
// input: 5
// output: 120
#include<stdio.h>

int Fact(int no)
{
    static int iMult = 1;
    if(no != 0)
    {
      iMult = iMult * no;
       no--;
      Fact(no);
    }
    return iMult;
}
int main()
{
    int value = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &value);

    iRet = Fact(value);
    printf("Factorial is: %d",iRet);

    return 0;
}

