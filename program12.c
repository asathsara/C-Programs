/*
 * Program: Month Name Selector
 * ----------------------------
 * This program prompts the user to enter a number between 1 and 12.
 * - If the input is invalid (not in the range 1-12), it asks again until a valid number is entered.
 * - Once a valid number is received, it displays the corresponding month using a `switch` statement.
 *
 * Steps:
 * 1. The program initializes `month` to 0.
 * 2. A `do-while` loop keeps prompting the user for input until a valid month number (1-12) is entered.
 * 3. A `switch` statement maps the number to its corresponding month and prints the result.
 */

#include <stdio.h>

int main(){

    int month = 0;

    printf("Enter a number between 1 and 12: ");
    
    do
    {
        scanf("%d", &month);
        if (month < 1 || month > 12) {
            printf("Invalid input. Please enter a number between 1 and 12: ");
        }
    } while (month < 1 || month > 12);

    switch (month)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    }

    return 0;
    
}