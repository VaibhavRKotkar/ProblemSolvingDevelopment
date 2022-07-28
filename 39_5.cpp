// write a recursive program to accept number from user and return its number.
// input: 879
// output: 978
#include<iostream>
using namespace std;

int RevDig(int no)
{

  static int iDigit = 0, iRev = 0;

    if(no !=0)
    {
       iDigit = no % 10;
       iRev = (iRev * 10) + iDigit;
       no = no /10;
       RevDig(no);
    }
    return iRev;
}
int main()
{
    int value = 0, iRet = 0;
    cout<<"Enter Number: ";
    cin>>value;
    iRet = RevDig(value);
    cout<<"Reverse Number is: "<<iRet;

    return 0;
}

