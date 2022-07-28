//1. write a program which accept file name from user and one count from user and read that number of characters from starting position.
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define FILESIZE 1024

void Display(char FName[],int no)
{
    int fd = 0, iRet = 0, i = 0, iCount = 0 ;
    char Data[FILESIZE];

      fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return ;
    }

    lseek(fd, 0, 0);
    read(fd, Data,no);
    write(1,Data,no);
    close(fd);
}

int main()
{
    char Fname[50];
    int iValue = 0;

    printf("Enter file Name: ");
    scanf(" %[^'\n']s",Fname);

    printf("Enter the Number of characters: ");
    scanf(" %d",&iValue);

   Display(Fname, iValue);

    return 0;
}