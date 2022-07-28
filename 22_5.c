// 5. Accept division of student and display their exam timing
#include<stdio.h>

void DisplaySchedule(char chDiv)
{
   if(chDiv == 'A' || chDiv == 'a')
   {
        printf("Exam of Division A at 7 AM");
   }
   else  if(chDiv == 'B' || chDiv == 'b')
   {
        printf("Exam of Division B at 8.30 AM");
   }
   else  if(chDiv == 'C' || chDiv == 'c')
   {
        printf("Exam of Division C at 9.20 AM");
   }
   else  if(chDiv == 'D' || chDiv == 'd')
   {
        printf("Exam of Division D at 10.30 AM");
   }
   else
   {
        printf("Invalid Division");
   }
}

int main()
{
   char cValue = '\0';

   printf("Enter the Division: ");
   scanf("%c",&cValue);

   DisplaySchedule(cValue);;
    return 0;
}