/*
 * Program: Right-Angled Triangle Pattern
 * --------------------------------------
 * This program prints a right-angled triangle pattern of asterisks (`*`).
 *
 * Logic:
 * - The outer `for` loop (`i`) controls the number of rows.
 * - The inner `for` loop (`j`) prints `*` in increasing order.
 * - A newline (`\n`) is printed after each row to move to the next line.
 *
 * If `n = 5`, the expected output is:
 *
 * *
 * **
 * ***
 * ****
 * *****
 */

#include <stdio.h>

int main(){

    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}