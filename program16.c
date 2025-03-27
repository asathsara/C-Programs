/*
 * Program: Centered Right-Angled Triangle Pattern (Half-Pyramid)
 * -------------------------------------------------------------
 * This program prints a half-pyramid pattern of asterisks (`*`), where:
 * - The triangle is aligned to the right and is centered.
 * - The number of rows is defined by `n` (in this case, 5).
 *
 * Logic:
 * - The outer `for` loop (`i`) controls the number of rows.
 * - The first inner `for` loop (`j`) prints spaces to center-align the stars.
 * - The second inner `for` loop (`k`) prints `*` for each row.
 * - A newline (`\n`) is printed after each row to move to the next line.
 *
 * Expected Output (for `n = 5`):
 *     *
 *    **
 *   ***
 *  ****
 * *****
 */

#include <stdio.h>

int main(){

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++){

            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        
         printf("\n");
    }
    
    return 0;
}