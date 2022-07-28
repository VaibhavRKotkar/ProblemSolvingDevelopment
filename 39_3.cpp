// Accept string from user and return number of smallest characters.
#include<iostream>
using namespace std;

int WhiteSpaces(char *str)
{
   static int iCnt = 0;

   if(*str != '\0')
   {
       if(*str >= 'a' && *str <= 'z')
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
    cout<<"Small characters are:"<<iRet;

    return 0;
}