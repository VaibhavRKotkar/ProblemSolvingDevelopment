//Accept one number and one position & oFF that Bit and Return the Modified Number.
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0;
typedef unsigned int UNIT;
typedef int BOOL;

BOOL OffBit(UNIT iNo, int iPos)
{
    int iMask = 0X00000001 ;
    iMask = iMask<<(iPos-1);
    int iResult = iNo & (~iMask);

    return iResult;

}

int main()
{
    int iRet = 0;
    int bValue = 0, bpos = 0;

     cout<<"Enter the Value: ";
     cin>>bValue;

      cout<<"Enter the Bit Position: ";
      cin>>bpos;

     iRet = OffBit(bValue, bpos);

     cout<<"Modified Number is: "<<iRet;






    return 0;
}