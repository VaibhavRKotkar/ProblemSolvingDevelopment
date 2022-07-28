#include<stdio.h>

int main()
{
    int n= 2345678;
    int iCnt = 1000000;
      while(iCnt >= 0)
      {
          printf("%d  ",n/iCnt);
          n = n - ((n/iCnt)*iCnt);

        iCnt = iCnt/10;
      }
	return 0;
}

// gcc program1.c  -o  Myexe

// Windows
// Myexe

// Linux / MacOS
// ./Myexe