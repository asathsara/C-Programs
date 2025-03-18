/*
 * Program: Simple Addition Calculator
 * -----------------------------------
 * This program takes two integer inputs from the user, adds them, 
 * and displays the result. It demonstrates:
 * - The use of `scanf()` for user input.
 * - The use of `printf()` for formatted output.
 * - Basic arithmetic operations in C.
 *
 * Steps:
 * 1. The program prompts the user to enter two numbers.
 * 2. It reads and stores the numbers in integer variables (`a` and `b`).
 * 3. It calculates their sum and stores it in `sum`.
 * 4. Finally, it prints the result in a user-friendly format.
 */

#include <stdio.h>

int main() {

    int a, b, sum;

    printf("Enter first number:  \n");
    scanf("%d", &a);

    printf("Enter second number:  \n");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);


    return 0;
}
