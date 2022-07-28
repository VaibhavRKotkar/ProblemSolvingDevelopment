// write a recursive program to display the below pattern.
// a b c d e f
#include<iostream>
using namespace std;

void Display(int no)
{
   static int iCnt = 0;
    static char ch = 'a';

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