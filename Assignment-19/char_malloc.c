#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *pointer_char;
char *thread_var = "Thread";

int main()
{   
    size_t len = strlen(thread_var);
    pointer_char = malloc((len + 1) * sizeof(char));    

    if (pointer_char == NULL)
    {
	printf("Memory allocation failed!");
    return 1;
    }
    strncpy(pointer_char, thread_var, len + 1);

    pointer_char[len] = '\0';

    // Should print "Hello, World!"
    printf("The string is: %s\n", pointer_char);

    free(pointer_char);
    pointer_char = NULL;

    printf("Pointer is equal to >>> %p\n", pointer_char);

    return 0;
}