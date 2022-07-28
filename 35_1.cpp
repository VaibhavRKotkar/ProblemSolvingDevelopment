// Write Generic Program & Accept one value and one number from user Print that number of times the value on screen
#include<iostream>
using namespace std;

template<class T>
void Display(T value, int no)
{
    int i = 0;
    for(i = 1; i <no; i++)
    {
            cout<<value<<"  ";
    }

}
int main()
{
    Display('M',7);
    cout<<endl;
    Display(10,5);
    cout<<endl;
    Display(10.36,4);

    return 0;
}