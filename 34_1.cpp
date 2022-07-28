// write generic program to multiply two numbers
#include<iostream>
using namespace std;

template<class T>

T Multiply(T no1, T no2)
{
     T Ans;
     Ans = no1 * no2;
     return Ans;
}

int main()
{
     int iRet = Multiply(10,20);
     cout<<"Multiplication is: "<<iRet<<endl;

     float fRet = Multiply(10.54f,20.3564f);
     cout<<"Multiplication is: "<<fRet<<endl;

      return 0;

}