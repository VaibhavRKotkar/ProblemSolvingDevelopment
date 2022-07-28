// write generic program to  accept N values and return addition of that values.
#include<iostream>
using namespace std;

template<class T>

T AddN(T *arr, int size)
{
   T Sum = 0;
   int i = 0;

   if(arr == NULL)
   {
        return 0;
   }

   for(i = 0; i < size; i++)
   {
        Sum = Sum + arr[i];
   }

     return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {1.230,20.65,30.50,4.0,50.65};
    int iSum = AddN(arr,5);
    cout<<"Summation of N numbers is: "<<iSum<<endl;

    float fSum = AddN(brr,5);
    cout<<"Summation of N numbers is: "<<fSum<<endl;

      return 0;

}