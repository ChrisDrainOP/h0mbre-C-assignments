#include <stdio.h>
#include <stdlib.h>

struct simple {
    int simple_int;
};

struct simple *simple_structure;

struct simple test;

int main() 
{
    simple_structure = &test;
    (*simple_structure).simple_int = 5;
    printf("The int is equal to: %d\n", simple_structure->simple_int);

    (*simple_structure).simple_int = 10;
    printf("Now the int is: %d\n", simple_structure->simple_int);


    simple_structure->simple_int = 15;
    printf("Finally the int is %d\n", simple_structure->simple_int);
    
    return 0;
}