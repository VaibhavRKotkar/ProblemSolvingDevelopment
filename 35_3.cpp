// Write Generic Program & Accept N values and one number from user. Print the first occurrence of that number on screen.
#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *Arr,int Size, T no)
{
   int i = 0,Count = 0;
    for(i = 0; i < Size; i++)
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
    int arr[] = {10,54,65,25,65,69,84,65};
    int Ret = SearchFirst(arr,8,69);
    cout<<"First occurrence of "<<69<<" is "<<Ret<<endl;

    return 0;
}