#include<iostream>
using namespace std;

void display(int A, int B)
{
    int iNo1 = 0, iNo2 = 1, iNo3 = 0, iSum = 0;
    int i = 0, j = 0;
        cout<<"Fibonacci numbers are : ";
        cout<< iNo1<<" ";
        cout<< iNo2<<" ";
    for(i = 1; i <=B; i++)
    {
     for(j=A; A <= iNo3; A++)
     {
       if(A <= B)
{        iSum += iNo3;   }
     }
      if(iNo3 > B)
        {break;}

        iNo3 = iNo1 + iNo2;
        cout<< iNo3<<" ";
        iNo1 = iNo2;
        iNo2 = iNo3;

    }
 cout<<endl<<"Summation of fibo numbers between ranges is :"<< iSum;
}
int main()
{
    int iRet = 0, iStart = 0, iEnd = 0;

    cout << "Enter the starting number : ";
    cin >> iStart;

     cout << "Enter the last number : ";
    cin >> iEnd;

    display(iStart, iEnd);

return 0;
}