// write a recursive program to display the below pattern.
// a b c d e f
#include<iostream>
using namespace std;

void Display()
{
   static int iCnt = 0;
    static char ch = 'a';

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