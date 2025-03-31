/*
 * Program: String Input and Output Demonstration
 * ----------------------------------------------
 * This program demonstrates how to read and display a string using different output functions.
 * The user enters a message, which is then displayed using both `puts` and `fputs`.
 * 
 * Functions used:
 * 1. `puts`: Automatically adds a newline at the end when printing a string.
 * 2. `fputs`: Does not add a newline automatically; it requires explicit `\n` if needed.
 * 
 * Example:
 * - Input: "Hello, World!"
 * - Output (using puts):
 *       Your message is:
 *       Hello, World!
 * - Output (using fputs):
 *       Your message is:
 *       Hello, World!
 */

#include <stdio.h>

int main(){

    char message[50];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin); // Read a line of text

    // Display the message using puts
    printf("\nYour message is: \n");
    puts(message);

    // Display the message using fputs
    printf("\nYour message is: \n");
    fputs(message, stdout); // Write to standard output

    return 0;
}