/*
 * Program: Logical Operators in C
 * --------------------------------
 * This program demonstrates the use of logical operators in C:
 * - AND (`&&`) → Returns true if both conditions are true.
 * - OR (`||`) → Returns true if at least one condition is true.
 * - NOT (`!`) → Negates the result of a condition.
 *
 * Logical Expressions Used:
 * 1. `m > n  && m != 0` → Checks if `m` is greater than `n` **AND** `m` is not zero.
 * 2. `o > p || p != 20` → Checks if `o` is greater than `p` **OR** `p` is not 20.
 * 3. `!(m > n && m != 0)` → Negates the result of `m > n && m != 0`.
 *
 * Steps:
 * - The program initializes four integer variables (`m`, `n`, `o`, `p`).
 * - It applies logical operations to these variables and stores the results in boolean variables (`ans1`, `ans2`, `ans3`).
 * - The results are printed to the console using `printf()`.
 */

 #include <stdio.h>   // Standard I/O library for printf
 #include <stdbool.h> // Boolean data type support in C

int main(){

    int m = 40;
    int n = 20;
    int o = 20;
    int p = 30;

    bool ans1 = m > n  && m != 0;
    bool ans2 = o > p || p != 20;
    bool ans3 = !(m > n && m !=0);

    printf("Result of m > n  && m != 0 is %d\n", ans1);
    printf("Result of o > p || p != 20 is %d\n", ans2);
    printf("Result of !(m > n && m !=0) is %d\n", ans3);

    return 0;
}