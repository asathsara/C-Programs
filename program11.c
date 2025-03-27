/*
 * Program: Sum of Numbers Using a do-while Loop
 * ---------------------------------------------
 * This program keeps asking the user for numbers and adds them to a sum.
 * The loop stops when the user enters a non-positive number (≤ 0).
 *
 * Steps:
 * 1. The program initializes an integer `sum` to 0.
 * 2. Inside a `do-while` loop:
 *    - It prompts the user to enter a number.
 *    - The number is added to `sum`.
 *    - The loop runs **at least once** and stops when the entered number is ≤ 0.
 * 3. Finally, it prints the sum of all entered numbers.
 */

#include <stdio.h>

int main(){

    int a, sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        sum += a;

    } while (a > 0);

    sum -= a; // Remove the last non-positive number from the sum

    printf("Sum of the numbers is %d\n", sum);
    
    return 0;
}