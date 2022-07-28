// write a recursive program to display the below pattern.
// * * * * *
#include<iostream>
using namespace std;

void Display(int no)
{
   static int iCnt = 0;

    if(iCnt < no)
    {
        cout<<"*  ";
        iCnt++;
        Display(no);
    }

}
int main()
{
    Display(5);

    return 0;
}