/*
 * Program: Character Printing and Year Display
 * --------------------------------------------
 * This program demonstrates how individual characters 
 * can be stored in variables and printed together to form a string. 
 * It also prints a predefined year.
 *
 * Working:
 * - Each character of the phrase "C Programming" is stored 
 *   in a separate `char` variable.
 * - The `printf` function is used to print these characters 
 *   in a formatted way.
 * - An integer variable `year` is initialized to 1995 
 *   and printed as part of an output statement.
 * 
 * Purpose:
 * - To understand character handling in C.
 * - To practice using `printf` for formatted output.
 * - To reinforce basic variable usage.
 */

#include <stdio.h>

int main()
{

    char first = 'C', second = ' ', third = 'P', fourth = 'r', fifth = 'o', sixth = 'g', seventh = 'r', eighth = 'a', ninth = 'm', tenth = 'i', eleventh = 'n', twelfth = 'g';

    int year = 1995;

    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n", first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, ninth , tenth, eleventh, twelfth);

    printf("The program was written in %d\n", year);

    return 0;
}