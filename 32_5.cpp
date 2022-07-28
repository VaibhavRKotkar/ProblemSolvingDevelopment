//Accept one number & Toggle content of first and last nibble of the number and Return the Modified Number.
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0;
typedef unsigned int UNIT;
typedef int BOOL;

BOOL ToggleBit(UNIT iNo)
{
    int iMask = 0X99999999;
    UNIT iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UNIT iRet = 0;
    int bValue = 0;

     cout<<"Enter the Value: ";
     cin>>bValue;

     iRet = ToggleBit(bValue);

     cout<<"Modified Number is: "<<iRet;






    return 0;
}