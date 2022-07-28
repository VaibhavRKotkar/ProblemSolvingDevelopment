#include<stdio.h>
void function();
int main()
{

 function();
    return 0;
}
void function()
{
    int n = 25;
    int i =1, s = 1;

    while(s <= n)
    {
        i++;
        s = s + i;
        printf("%d\n",s);
    }
}