/*
 * Program: Expression Evaluation in C
 * ------------------------------------
 * This program evaluates and prints the results of different mathematical expressions.
 * It demonstrates:
 * - The effect of parentheses on arithmetic operations.
 * - Operator precedence in C.
 * - How expressions with multiplication, division, and addition behave.
 *
 * Expressions Used:
 * 1. (a + b) / (c + d) → Ensures both numerator and denominator are evaluated first.
 * 2. a + b / (c + d)   → Demonstrates operator precedence (division happens first).
 * 3. (a + b) / c + d   → Shows how division interacts with addition.
 * 4. a * b / c * d     → Highlights left-to-right evaluation of multiplication/division.
 */

#include <stdio.h>

int main() {

    float a, b, c, d;

    a = 1;
    b = 2;
    c = 3;
    d = 4;

    float cal1 = (a + b) / (c + d);
    float cal2 = a + b / (c + d);
    float cal3 = (a + b) / c + d;
    float cal4 = a*b / c*d;

    printf("Result of (a + b) / (c + d) is %.2f\n", cal1);
    printf("Result of a + b / (c + d) is %.2f\n", cal2);
    printf("Result of (a + b) / c + d is %.2f\n", cal3);
    printf("Result of a*b / c*d is %.2f\n", cal4);

    return 0;
}