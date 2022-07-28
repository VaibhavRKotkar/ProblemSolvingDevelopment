//1. write a program which accept file name from user and count nuumber of capital characters from that file.
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define FILESIZE 1024

int CountCapital(char FName[])
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
        if((Data[i] >= 'A')&& (Data[i] <= 'Z'))
        {
            iCount++;
        }
       }
   }
    return iCount;
    close(fd);
}
int main()
{
    char Fname[50];
   int iRet  = 0;

    printf("Enter file Name: ");
    scanf("%s",Fname);

    iRet = CountCapital(Fname);
    printf("Number of Capital Characters are: %d\n",iRet);

    return 0;
}