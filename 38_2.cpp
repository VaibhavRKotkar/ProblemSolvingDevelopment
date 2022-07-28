// write a recursive program to accept number from user and return summation of its digit.
// input: 879
// output: 24
#include<iostream>
using namespace std;

int Display(int no)
{

  static int iDigit = 0, iSum = 0;

    if(no !=0)
    {
       iDigit = no % 10;
       iSum = iSum + iDigit;
       no = no /10;
       Display(no);
    }
    return iSum;
}
int main()
{
    int value = 0, iRet = 0;
    cout<<"Enter Number: ";
    cin>>value;
    iRet = Display(value);
    cout<<"Summation of Digit is: "<<iRet;

    return 0;
}

