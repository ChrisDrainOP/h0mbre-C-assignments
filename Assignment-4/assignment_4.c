#include <stdio.h>
#define PIE 3.14
/*Assignment 4

Prompt the user to input the length of a radius and then print the area of the user's circle to the terminal.

Extra credit: Use the #define feature of C to assign the value 3.14 to PIE.
*/

float radius_of_circle;
float calculate_area_circle(float radius_of_circle);



int main() 
{
    printf("Enter the radius of your circle: ");
    scanf("%f", &radius_of_circle);
    printf("The area of your circle is %f", calculate_area_circle(radius_of_circle));
    
}

float calculate_area_circle(float radius_of_circle)
{
    float area_of_circle;
    float square;

    square = radius_of_circle * radius_of_circle;

    area_of_circle = PIE * square;

    return area_of_circle;

}