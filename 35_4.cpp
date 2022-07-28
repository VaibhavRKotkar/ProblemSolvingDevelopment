// Write Generic Program & Accept N values and return Last Occurrence of that Number
#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *Arr,int Size, T no)
{
   int i = 0;

    for(i = (Size-1); i >= 0; i--)
    {
        if(Arr[i]==no)
        {
            break;
        }
    }
    return (i+1);
}
int main()
{
    int arr[] = {10,54,65,25,65,69,65,84,10};
    int Ret = SearchLast(arr,9,65);
    cout<<"Last occurrence is at: "<<Ret<<endl;

    return 0;
}