#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

 int text_file;


int main(void) 
{
    
    text_file = open("testfile.txt", O_WRONLY | O_CREAT | S_IRWXU);

    if (text_file < 0)
    {
        printf("the open foperation failed...");
        return -1;
    }
    else
    {
        printf("The open operation succeeded");
        return 0;
    }
}