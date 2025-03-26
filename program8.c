/*
 * Program: Logical Expressions Evaluation in C
 * --------------------------------------------
 * This program evaluates different logical expressions using:
 * - Logical AND (`&&`) → Returns true if both conditions are true.
 * - Logical OR (`||`) → Returns true if at least one condition is true.
 * - Relational operators (`<=`, `>=`, <, >, ==, !=`) for comparisons.
 *
 * Logical Expressions Used:
 * 1. `(i && j && k)` → Checks if all three integer values are nonzero (true).
 * 2. `(x || i && j - 3)` → Checks if `x` is nonzero OR (`i && (j - 3)`) is true.
 * 3. `(i < j && x < y)` → Checks if `i` is less than `j` **AND** `x` is less than `y`.
 * 4. `('A' <= C && C <= 'Z')` → Checks if `C` is an uppercase letter (within A-Z).
 * 5. `(C - 1 == 'A' && C + 1 == 'Z')` → Checks if `C` is between 'A' and 'Z' in ASCII values.
 *
 * Steps:
 * - The program initializes integer, character, and floating-point variables.
 * - It evaluates each logical expression and prints `"true"` or `"false"` accordingly.
 */

#include <stdio.h>

int main(){

    char C = 'B';
    int i = 3, j = 3, k = 3;
    double x = 0.0, y = 2.3;

    printf("%s\n", (i && j && k) ? "true" : "false");
    printf("%s\n", (x || i && j - 3) ? "true" : "false");
    printf("%s\n", (i < j && x < y) ? "true" : "false");
    printf("%s\n", ('A' <= C && C <=  'Z') ? "true" : "false");
    printf("%s\n", (C - 1 == 'A' && C + 1 == 'Z') ? "true" : "false");
}

