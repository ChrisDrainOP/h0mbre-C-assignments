#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

 int text_file;


int main(void) 
{
    
    text_file = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if (text_file < 0)
    {
        printf("the open operation failed...");
        return -1;
    }
    else
    {
        printf("The open operation succeeded\n");
    }

    int writertn;

    writertn = write(text_file,"Checking the length of this string", 34);

    if (writertn != 34) 
    {
        printf("Write operation failed.");
        return -1;
    }
    else
    {
        printf("The Write operation suceeded!\n");
    }

    if (close(text_file) < 0)
    {
        printf("Close Operation Failed!!!");
        return -1;
    }
    else
    {
        printf("Close operation Suceeded!!!");
    }
    return 0;


    
    }