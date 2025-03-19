/*
 * Program: Increment and Decrement Operators in C
 * -----------------------------------------------
 * This program demonstrates the difference between:
 * - Post-increment (a++) and Pre-increment (++a)
 * - Post-decrement (a--) and Pre-decrement (--a)
 *
 * Key Concepts:
 * 1. `a++` (Post-increment): Returns the current value of `a`, then increments it.
 * 2. `++a` (Pre-increment): Increments `a` first, then returns the new value.
 * 3. `a--` (Post-decrement): Returns the current value of `a`, then decrements it.
 * 4. `--a` (Pre-decrement): Decrements `a` first, then returns the new value.
 *
 * Steps:
 * - The program initializes `a` to 1 and applies each of these operations.
 * - It prints the value of `a` before and after each operation to show the effect.
 */

#include <stdio.h>

int main() {

    int a = 1;

    printf("Initial value of a: %d\n", a);
    printf("Value of a++: %d\n", a++);
    printf("Value of a after a++: %d\n", a);
    printf("\n");

    a = 1;
    printf("Initial value of a: %d\n", a);
    printf("Value of ++a: %d\n", ++a);
    printf("Value of a after ++a: %d\n", a);
    printf("\n");

    a = 1;
    printf("Initial value of a: %d\n", a);
    printf("Value of a--: %d\n", a--);
    printf("Value of a after a--: %d\n", a);
    printf("\n");

    a = 1;
    printf("Initial value of a: %d\n", a);
    printf("Value of --a: %d\n", --a);
    printf("Value of a after --a: %d\n", a);



    return 0;
}