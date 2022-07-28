// write generic program to  accept N values and return Largest value.
#include<iostream>
using namespace std;

template<class T>

T MaxN(T *arr, int size)
{
   T Max = arr[0];
   int i = 0;

   if(arr == NULL)
   {
        return 0;
   }

   for(i = 0; i < size; i++)
   {
       if(arr[i]>Max)
       {
            Max = arr[i];
       }
   }

     return Max;
}

int main()
{
    int arr[] = {10,20,350,40,50};
    float brr[] = {1.230f,20.65f,30.50f,4.0f,50.65f};
    int iSum = MaxN(arr,5);
    cout<<"Maximum number is: "<<iSum<<endl;

    float fSum = MaxN(brr,5);
    cout<<"Maximum number is: "<<fSum<<endl;

      return 0;

}