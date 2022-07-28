// Write Application which will read all the data from the existing file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[60];
    int fd = 0;
    char Data[10];
    int iRet = 0, iSum = 0;

    printf("Enter file name that you want to open: ");
    scanf(" %[^'\n']s", Fname);

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    printf("File successfully get opened having fd  %d\n",fd);

  while((iRet = read(fd,Data,sizeof(Data))) != 0)
  {
        iSum += iRet;
  }
  printf("File size is: %d bytes.", iSum);

close(fd);
  return 0;
}