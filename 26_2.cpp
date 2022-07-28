// 2. Accept String and one character and return frequency of that character.
#include<iostream>
using namespace std;

int CountChar(char *str, char ch)
{
  int iCnt = 0;
   while(*str!= '\0')
   {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
   }
    return iCnt;
}

int main()
{
    char arr[20];
    char chLetter;

   int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(arr, 20);

     cout<<"Enter character"<<endl;
     cin>>chLetter;

   iRet = CountChar(arr,chLetter);

   cout<<"Character frequency is: "<<iRet<<endl;

    return 0;
}