// write generic program to  find largest number from three numbers
#include<iostream>
using namespace std;

template<class T>

T Max(T no1, T no2, T no3)
{
   T Max = no1;
   if(Max < no2)
   {
        Max = no2;
   }
   else if(Max < no3)
   {
      Max = no3;
   }
     return Max;
}

int main()
{
     int iRet = Max(10,20,15);
     cout<<"Maximum number is: "<<iRet<<endl;

     float fRet = Max(10.54f,25.3564f,12.36f);
     cout<<"Maximum number is: "<<fRet<<endl;

      return 0;

}