// write a recursive program to accept number from user and return its largest digit.
// input: 879
// output: 9
#include<iostream>
using namespace std;

int LarDig(int no)
{

  static int iDigit = 0, iMax = 0;

    if(no !=0)
    {
       iDigit = no % 10;
       if(iDigit > iMax)
       {
            iMax = iDigit;
       }
       no = no /10;
       LarDig(no);
    }
    return iMax;
}
int main()
{
    int value = 0, iRet = 0;
    cout<<"Enter Number: ";
    cin>>value;
    iRet = LarDig(value);
    cout<<"Largest Digit is: "<<iRet;

    return 0;
}

