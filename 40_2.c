// Write Application which will open the existing file.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[100];
    int fd = 0;

    printf("Enter file name that you want to open: ");
    scanf(" %[^'\n']s", Fname);

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    printf("File successfully get opened having fd  %d",fd);

  return 0;
}