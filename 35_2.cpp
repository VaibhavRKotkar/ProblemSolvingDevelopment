// Write Generic Program & Accept N values and one number from user Print that number frequency on screen.
#include<iostream>
using namespace std;

template<class T>
int Frequency(T *Arr,int Size, T no)
{
    int i = 0,Count = 0;
    for(i = 1; i <Size; i++)
    {
         if(Arr[i] == no)
         {
            Count++;
         }
    }
    return Count;
}
int main()
{
    int arr[] = {10,54,65,25,65,69,84,65};
    int Cnt = Frequency(arr,8,69);
    cout<<"Frequency of "<<65<<" is "<<Cnt<<" times."<<endl;

    return 0;
}