/*
 * Program: Leap Year Checker with Input Validation
 * ------------------------------------------------
 * This program checks whether the given year is a leap year or not, with input validation.
 * The program ensures that the user inputs a valid integer for the year. If the input is invalid,
 * it informs the user and exits gracefully.
 *
 * Logic:
 * - First, the program prompts the user to enter a year.
 * - The input is validated to check if it's a valid integer using `scanf`.
 * - Then, it checks if the year is divisible by 4 but not divisible by 100, or if it is divisible by 400.
 * - If either condition is true, it is a leap year; otherwise, it is not.
 *
 * Example:
 * - 2020 is a leap year (divisible by 4 and not divisible by 100).
 * - 1900 is not a leap year (divisible by 100 but not by 400).
 */

#include <stdio.h>

int main(){

    int year = 0;
    printf("Enter a year: ");

    // Check if the input is a valid integer
    if (scanf("%d", &year) != 1) {
        printf("Invalid input. Please enter a valid year.\n");
        return 1; // Exit the program with a non-zero status
    }

     // Check if the year is a leap year
     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    

    return 0;
}