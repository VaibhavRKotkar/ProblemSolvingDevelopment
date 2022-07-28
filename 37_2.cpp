// write a recursive program to display the below pattern.
// 1 2 3 4 5
#include<iostream>
using namespace std;

void Display(int no)
{
   static int iCnt = 1;

    if(iCnt <= no)
    {
        cout<<iCnt<<" ";
        iCnt++;
        Display(no);
    }

}
int main()
{
    Display(5);

    return 0;
}