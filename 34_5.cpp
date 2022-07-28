// write generic program to  accept N values and return Smallest value.
#include<iostream>
using namespace std;

template<class T>

T MinN(T *arr, int size)
{
   T Min = arr[0];
   int i = 0;

   if(arr == NULL)
   {
        return 0;
   }

   for(i = 0; i < size; i++)
   {
       if(arr[i] < Min)
        {
            Min = arr[i];
       }
   }

     return Min;
}

int main()
{
    int arr[] = {10,20,350,40,50};
    float brr[] = {1.230f,20.65f,30.50f,4.0f,50.65f};
    int iSum = MinN(arr,5);
    cout<<"Minimum number is: "<<iSum<<endl;

    float fSum = MinN(brr,5);
    cout<<"Minimum number is: "<<fSum<<endl;

      return 0;

}