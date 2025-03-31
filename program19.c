/*
 * Program: Factorial Calculator (Recursive Approach)
 * ---------------------------------------------------
 * This program calculates the factorial of a given non-negative integer using recursion.
 * The program includes input validation to ensure the user enters a valid non-negative integer.
 *
 * Logic:
 * - The factorial of a number `n` is defined as:
 *     n! = n * (n-1) * (n-2) * ... * 1
 * - Base Case:
 *     - If `n == 0` or `n == 1`, return 1.
 * - Recursive Case:
 *     - Otherwise, return `n * factorial(n-1)`.
 * 
 * Example:
 * - Input: 5
 * - Calculation: 5! = 5 × 4 × 3 × 2 × 1 = 120
 * - Output: "Factorial of 5 is 120"
 */

#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{

    printf("Enter a number: ");
    int num = 0;

    // Check if the input is a valid integer
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit the program with a non-zero status
    }

    if (num < 0)
    {
        printf("Negative numbers are not allowed.\n");
        return 1; // Exit the program with a non-zero status
    }

    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
