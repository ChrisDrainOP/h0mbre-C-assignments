#include <stdio.h>
/*Assignment 2

Initialize and assign a value to an integer, float, and char variable. Then print each one with a sentence on a new line describing variable data type.*/

void main()
{
    int integer = 19;
    char character[] = "We did it";
    float floater = 3.14000;

    printf("%d is a integer\n", integer);
    printf("%s is a character\n", character);
    printf("%f is a floating point number\n", floater);
}