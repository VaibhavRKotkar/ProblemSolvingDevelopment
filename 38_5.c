// write a recursive program to accept number from user and return its product of digits.
// input: 523
// output: 30
#include<stdio.h>

int Mult(int no)
{
    static int iMult = 1, iDigit = 0;
    if(no != 0)
    {
      iDigit = no % 10;
      iMult = iMult * iDigit;
       no = no / 10;
      Mult(no);
    }
    return iMult;
}
int main()
{
    int value = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &value);

    iRet = Mult(value);
    printf("produt is: %d",iRet);

    return 0;
}

