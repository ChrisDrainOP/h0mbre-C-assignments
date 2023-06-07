#include <stdio.h>

/*Assignment 9

Take two command line arguments from the user, their first and last name, and then print a welcome message for the user.

The program should check for two arguments and then print the program's usage instructions if the user submits too few or too many arguments.*/

int main(int argc, char *argv[] ) {

    if (argc != 3) {
        printf("Usage: ./assignmennt9 Firstname Lastname");
        return 0;    
    }
    else 
        printf("Hello, %s %s!", argv[1], argv[2]);
}