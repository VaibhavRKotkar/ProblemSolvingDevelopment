// write a recursive program to display the below pattern.
// 5 4 3 2 1
#include<iostream>
using namespace std;

void Display(int no)
{
   static int iCnt = no;

    if(iCnt !=0)
    {
        cout<<iCnt<<" ";
        iCnt--;
        Display(no);
    }

}
int main()
{
    Display(5);

    return 0;
}