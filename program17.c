/*
 * Program: Inverted Right-Angled Triangle Pattern
 * ------------------------------------------------
 * This program prints an inverted right-angled triangle pattern of asterisks (`*`).
 * - The number of rows is defined by `n` (in this case, 5).
 * - The number of stars decreases as the rows go down.
 *
 * Logic:
 * - The outer `for` loop (`i`) controls the number of rows, starting from `n` and decreasing.
 * - The inner `for` loop (`j`) prints stars on each row, with the number of stars decreasing.
 * - A newline (`\n`) is printed after each row to move to the next line.
 *
 * Expected Output (for `n = 5`):
 * *****
 * ****
 * ***
 * **
 * *
 */

#include <stdio.h>

int main(){

    int n = 5;

    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}