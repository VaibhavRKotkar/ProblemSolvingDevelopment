//4. Accept 2 string from user and concat one string to another string.
#include<iostream>
using namespace std;

void StrCatX(char *src, char *dest)
{
   while(*src != '\0')
   {
        src++;
  }
    while(*dest != '\0')
   {
        *src = *dest;
        src++;
        dest++;
  }
   *src = '\0';
}
int main()
{
    char Arr[25];
    char Brr[25];

     cout<<"Enter First string: ";
     cin.getline(Arr,25);

     cout<<"Enter Second string: ";
     cin.getline(Brr,25);

     StrCatX(Arr,Brr);

    cout<<"String Copied: "<<Arr;

    return 0;
}