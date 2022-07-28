// Write Application which create file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[100];
    int fd = 0;

    printf("Enter file name that you want to create: ");
    scanf(" %[^'\n']s", Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("File not get created");
        return -1;
    }
    printf("File successfully get created having fd  %d",fd);

  return 0;
}