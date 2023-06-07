#include <stdio.h>
#define hour 3600
#define minute 60
#define second 1
/*Assignment 5

Prompt the user for a number of seconds. Take the user's input and convert the number of seconds into its duration in Hours, Minutes, and remaining Seconds.

Extra Credit: Make sure the Hours, Minutes, and Seconds print with no decimal places.*/

int seconds_user_input;
int input_copy;
int hours = 0;
int minutes = 0;
int seconds = 0;

void seconds_converter(int input_copy); 

int main()
{
    printf("Enter the amount of seconds: ");
    scanf("%d", &seconds_user_input);
    input_copy = seconds_user_input;
    seconds_converter(input_copy);
    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds", seconds_user_input, hours, minutes, seconds);

}

void seconds_converter(int input_copy)
{
    while (input_copy >= hour)
    {   
        ++hours;
        input_copy -= hour;
    }
    while (input_copy >= minute)
    {
        ++minutes;
        input_copy -= minute;
    }
    while (input_copy >= second) 
    {
        ++seconds;
        input_copy -= second;
    }
}