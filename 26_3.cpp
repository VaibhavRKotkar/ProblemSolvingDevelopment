// 3. Accept String and one character and return index of first occurrence of that character.
#include<iostream>
using namespace std;

int FirstChar(char *str, char ch)
{
   int iCnt = 0, iCount = 0;

   while(*str!= '\0')
   {
        if(*str == ch)
        {
           break;
        }
        iCnt++;
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

   iRet = FirstChar(arr,chLetter);

   cout<<"Character first occurrence is at: "<<iRet<<endl;

    return 0;
}