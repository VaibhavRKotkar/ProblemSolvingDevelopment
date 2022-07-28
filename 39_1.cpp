// Accept string from user and return white spaces
#include<iostream>
using namespace std;

int WhiteSpaces(char *str)
{
   static int iCnt = 0;

   if(*str != '\0')
   {
       if(*str == ' ')
       {
         iCnt++;
       }
    str++;
    WhiteSpaces(str);
   }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String: ";
    cin.getline(Arr,20);

    iRet = WhiteSpaces(Arr);
    cout<<"Whitespaces are:"<<iRet;

    return 0;
}