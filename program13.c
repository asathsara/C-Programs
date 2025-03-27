/*
 * Program: Rectangle Pattern Printing
 * ------------------------------------
 * This program prints a rectangle of asterisks (`*`) with:
 * - 5 rows
 * - 10 columns
 *
 * Logic:
 * - The outer `for` loop (`i`) controls the number of rows.
 * - The inner `for` loop (`j`) controls the number of columns.
 * - In each iteration of the inner loop, a `*` is printed.
 * - After the inner loop completes, a `\n` (newline) is printed to move to the next row.
 *
 * Expected Output:
 * **********
 * **********
 * **********
 * **********
 * **********
 */

#include <stdio.h>

int main(){

    int row = 5, col = 10;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}