// write a recursive program to display the below pattern.
// 1 2 3 4 5
#include<iostream>
using namespace std;

void Display()
{
   static int iCnt = 1;

    if(iCnt <= 5)
    {
        cout<<iCnt<<" ";
        iCnt++;
        Display();
    }

}
int main()
{
    Display();

    return 0;
}