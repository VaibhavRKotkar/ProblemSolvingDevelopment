#include<iostream>

using namespace std;

class Demo
{
    public:
        int no;
        int no2;

        Demo()
        {
            no =10;
            no = 28;
            cout<< "inside default constructor\n";
        }
        Demo(int no3,int no4)
        {
        cout<<"parameterised constructor\n";
        }
        ~Demo()
        {
          cout<<"Destructor\n";
        }
};
int main()
{
    Demo obj;
    Demo obj2(12,45);

    return 0;
}