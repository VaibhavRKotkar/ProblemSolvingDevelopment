// 1. Accept String and one character check whether that character is present or not.
#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    while(*str !='\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
   if(*str == ch)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    char arr[20];
    char chLetter;

    BOOL bRet = FALSE;

    cout<<"Enter string"<<endl;
    cin.getline(arr, 20);

     cout<<"Enter character"<<endl;
     cin>>chLetter;

    bRet = ChkChar(arr,chLetter);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not found");
    }
    return 0;
}