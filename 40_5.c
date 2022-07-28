// File Handling in C language file create & open that file and write the data into the file apend means data should written continously over previous
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
//O_RDONLY  read
//O_WRONLY  write
//O_RDWR    write + Read  this are macros

int main()
{
    char Fname[20];
    char Data[100];
    int fd = 0;
    int iRet = 0, iRead = 0;

    printf("Enter file name to open:  ");
    scanf(" %[^'\n']s",Fname);            // Use special scanf for string.

        fd = open(Fname,O_RDWR | O_APPEND);   // open file for read only
        if(fd == -1)
        {
            printf("Unable to open file");
            return -1;
        }
        printf("File is Successfully opened with fd %d\n", fd);

         printf("Enter the data that you want to write:\n");
         scanf(" %[^'\n']s",Data);

        iRet = write(fd,Data,strlen(Data));
        printf("%d bytes gets successfully written in the file\n",iRet);

        close(fd);
    return 0;
}