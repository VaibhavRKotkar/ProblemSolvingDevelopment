// write a recursive program to display the below pattern.
// 5 4 3 2 1
#include<iostream>
using namespace std;

void Display()
{
   static int iCnt = 5;

    if(iCnt !=0)
    {
        cout<<iCnt<<" ";
        iCnt--;
        Display();
    }

}
int main()
{
    Display();

    return 0;
}