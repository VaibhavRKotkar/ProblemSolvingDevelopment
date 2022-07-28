#include<stdio.h>


void DisplayConvert(char cValue)
{

     if(cValue >= 'a' && cValue <= 'z')
	 {
		  cValue = cValue-32;
		  printf("Uppercase is: %c",cValue);
	 }
	 else if(cValue >= 'A' && cValue <='Z')
	 {
	   cValue = cValue+32;
		  printf("Lowercase is: %c", cValue);
	 }

}
int main()
{
    char cValue = '\0';
     printf("Enter character:\t");
     scanf("%c", &cValue);
    DisplayConvert(cValue);


    return 0;
}