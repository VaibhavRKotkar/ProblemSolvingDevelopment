//Accept one number and Toggle 7th & 10th Bit. Return modified number.
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0;
typedef unsigned int UNIT;
typedef int BOOL;

UNIT ToggleBit(UNIT iNo)
{
    int iMask = 0X00000240 ;
    int iResult = iNo ^ iMask;

        return iResult;

}

int main()
{
    int iRet;
    int bValue = 0;

    cout<<"Enter the Value: ";
    cin>>bValue;

    iRet = ToggleBit(bValue);

    cout<<"Modified number is: "<<iRet;


    return 0;
}