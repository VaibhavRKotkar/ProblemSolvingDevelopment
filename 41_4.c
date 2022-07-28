//1. write a program which accept file name from user and count number of times character occurrence from that file.
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define FILESIZE 1024

int CountChar(char FName[],char ch)
{
    int fd = 0, iRet = 0, i = 0, iCount = 0 ;
    char Data[FILESIZE];

    fd = open(FName, O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open File\n");
        return -1;
    }
    printf("File opened successfully with fd : %d\n",fd);

   while((iRet = read(fd, Data,FILESIZE))!=0)
   {
       for(i = 0; i < iRet; i++)
       {
        if((Data[i]== ch))
        {
            iCount++;
        }
       }
   }
    close(fd);
    return iCount;
}

int main()
{
    char Fname[50];
   int iRet  = 0;
   char cValue;

    printf("Enter file Name: ");
    scanf(" %[^'\n']s",Fname);

    printf("Enter the character that you want to search: ");
    scanf(" %c",&cValue);

    iRet = CountChar(Fname, cValue);
    printf("Number of white Spaces are: %d\n",iRet);

    return 0;
}