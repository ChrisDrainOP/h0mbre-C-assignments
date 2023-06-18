#include <stdio.h>
#include <stdlib.h>
#include <strings.h>



struct point {
    int x;
    char y;
    float z;
} bacon;

int main() 
{
bacon.x = 3;
bacon.y = 66;
bacon.z = 4.5;

printf("This is the int: %d, this is the char: %c, this is the float: %f", bacon.x, bacon.y, bacon.z);
return 0;
}
