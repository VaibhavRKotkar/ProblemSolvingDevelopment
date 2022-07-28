// write a recursive program to display the below pattern.
// * * * * *
#include<iostream>
using namespace std;

void Display()
{
   static int iCnt = 0;

    if(iCnt < 5)
    {
        cout<<"*  ";
        iCnt++;
        Display();
    }

}
int main()
{
    Display();

    return 0;
}