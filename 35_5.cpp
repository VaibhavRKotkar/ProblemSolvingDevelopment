// Write Generic Program & Accept N values and Reverse the content.
#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr,int Size)
{
    int i = 0;
    T temp;
    T *Start = &Arr[0];
    T *End = &Arr[(Size-1)];

     while(Start < End)
    {
            temp = *Start;
            *Start = *End;
            *End = temp;

             Start++;
             End--;
    }
}

int main()
{
    int arr[] = {10,54,65,25,65,69,65,84,10};

   for(int i =0; i<9;i++)
   {
        cout<<arr[i]<<" ";
   }
    cout<<endl;
   Reverse(arr,9);

   cout<<"Array After Reverse:  "<<endl;

     for(int i =0; i<9;i++)
   {
        cout<<arr[i]<<"  ";
   }

    return 0;
}