//Accept one number and ON first 4 Bits. Return modified number.
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0;
typedef unsigned int UNIT;
typedef int BOOL;

UNIT OnnBit(UNIT iNo)
{
    int iMask = 0X0000000F ;
    int iResult = iNo | iMask;

        return iResult;

}

int main()
{
    int iRet;
    int bValue = 0;

    cout<<"Enter the Value: ";
    cin>>bValue;

    iRet = OnnBit(bValue);

    cout<<"Modified number is: "<<iRet;


    return 0;
}