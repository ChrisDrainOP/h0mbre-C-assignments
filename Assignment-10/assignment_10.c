#include <stdio.h>

 /*Assignment 10

Create an integer array with 10 integers and then print the number of elements in the array to the terminal.

Hint: Play with the sizeof() function to determine how many bytes of storage an integer takes up.*/

int int_array[10];



int main() 
{
    printf("The size of an int is: %d\n", sizeof(int));

    printf("The size of the int array is: %d\n", sizeof(int_array));

    printf("The number of elements in the array is: %d\n", sizeof(int_array) / sizeof(int));

}