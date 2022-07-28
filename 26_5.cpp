// 3. Accept String and reverse that string
#include<iostream>
using namespace std;

void StrRevX(char *str)
{
   char *start = str;
   char *end = str;
   char temp;

    while(*end!='\0')
    {
        end++;
    }
    end--;

   while(start < end)
   {
       temp = *start;
       *start = *end;
       *end = temp;

       start++;
       end--;
   }
}

int main()
{
    char arr[30];

    cout<<"Enter string: ";
    cin.getline(arr, 30);


    StrRevX(arr);

   cout<<"Modified string is: "<<arr<<endl;

    return 0;
}