#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *num_char;
int thread_var = 54;

int main()
{
int len = sizeof(char) *6;
num_char = malloc(len);

if (num_char == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
}
memset(num_char, thread_var, len);

num_char[6] = '\0';
printf("The num_char is variable is equal to %s\n", num_char);
free(num_char);
num_char = NULL;

printf("Pointer is equal to >>> %p\n", num_char);

return 0;

}