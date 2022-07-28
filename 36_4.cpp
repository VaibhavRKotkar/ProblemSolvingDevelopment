// write a recursive program to display the below pattern.
// A B C D E F
#include<iostream>
using namespace std;

void Display()
{
   static int iCnt = 0;
    static char ch = 'A';

    if(iCnt < 6)
    {
        cout<<ch<<" ";
        iCnt++;
        ch++;
        Display();
    }

}
int main()
{
    Display();

    return 0;
}