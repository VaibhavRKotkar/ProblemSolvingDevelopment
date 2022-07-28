//Accept one number and one position & check whether that position bit is ON or OFF.
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0;
typedef unsigned int UNIT;
typedef int BOOL;

BOOL ChkBit(UNIT iNo, int iPos)
{
    int iMask = 0X00000001 ;
    iMask = iMask<<(iPos-1);
    int iResult = iNo & iMask;

    if(iResult !=0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    BOOL bRet = 0;
    int bValue = 0, bpos = 0;

    cout<<"Enter the Value: ";
    cin>>bValue;

      cout<<"Enter the Bit Position: ";
      cin>>bpos;

    bRet = ChkBit(bValue, bpos);

    if(bRet == TRUE)
    {
        cout<<"Bit is ON";
    }
    else
    {
        cout<<"Bit is OFF";
    }




    return 0;
}