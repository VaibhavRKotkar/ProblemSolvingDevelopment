#include<stdio.h>

int main()
{
   register int iRows = 50;

    printf("Address is:%d ", &iRows);

    return 0;
}

// we cant fetch address of register storage class.