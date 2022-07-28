// write a recursive program to display the below pattern.
// A B C D E F
#include<iostream>
using namespace std;

void Display(int no)
{
   static int iCnt = 0;
    static char ch = 'A';

    if(iCnt < no)
    {
        cout<<ch<<" ";
        iCnt++;
        ch++;
        Display(no);
    }

}
int main()
{
    Display(6);

    return 0;
}