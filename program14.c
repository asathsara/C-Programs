/*
 * Program: Hollow Rectangle Pattern
 * ----------------------------------
 * This program prints a hollow rectangle of asterisks (`*`) with:
 * - 5 rows
 * - 10 columns
 *
 * Logic:
 * - The outer `for` loop (`i`) controls the number of rows.
 * - The inner `for` loop (`j`) controls the number of columns.
 * - A `*` is printed for:
 *   - The first row (`i == 1`)
 *   - The last row (`i == row`)
 *   - The first column (`j == 1`)
 *   - The last column (`j == col`)
 * - A space (`" "`) is printed for all other positions.
 *
 * Expected Output:
 * **********
 * *        *
 * *        *
 * *        *
 * **********
 */

#include <stdio.h>

int main(){

    int row = 5, col = 10;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++){

            if (i == 1 || i == row || j == 1 ||  j == col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}