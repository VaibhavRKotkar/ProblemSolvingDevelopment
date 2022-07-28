// write a recursive program to accept number from user and return its smallest digit.
// input: 879
// output: 9
#include<iostream>
using namespace std;

int SmallDig(int no)
{

  static int iDigit = 0, iMin = 9;

    if(no !=0)
    {
       iDigit = no % 10;
       if(iDigit < iMin)
       {
            iMin = iDigit;
       }
       no = no /10;
       SmallDig(no);
    }
    return iMin;
}
int main()
{
    int value = 0, iRet = 0;
    cout<<"Enter Number: ";
    cin>>value;
    iRet = SmallDig(value);
    cout<<"Smallest Digit is: "<<iRet;

    return 0;
}

