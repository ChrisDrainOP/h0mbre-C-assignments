#include <stdio.h>

/*Assignment 3

Prompt the user to input their first and last name and then print them a welcome message. Try storing the input as a char variable's value.

Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.

Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.
Example Output

tokyo:~/LearningC/ # ./assignment3                                     
Enter your first name: Jimmy
Enter your last name: Smith
Hello Jimmy Smith!
*/

char first_name[6];
char last_name[6];

main() 
{
    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("Hello %s %s !", first_name, last_name);
}