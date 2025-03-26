/*
 * Program: Print Odd Numbers from 1 to 20
 * ---------------------------------------
 * This program prints all odd numbers from 1 to 20 using a `for` loop.
 *
 * Steps:
 * - A `for` loop initializes `i` to 1.
 * - The loop continues while `i` is less than or equal to 20.
 * - In each iteration, `i` is incremented by 2 to skip even numbers.
 * - The value of `i` is printed in each iteration.
 *
 * Explanation:
 * - Since `i` starts at 1 and increases by 2 each time, it prints: 1, 3, 5, ..., 19.
 */

#include <stdio.h>

int main(){

    // for loop
    for (int i = 1; i <= 20; i+= 2){
        printf("%d\n", i);
    }

    printf("\n");

    // while loop
    int i = 1;
    while (i <= 20){
        printf("%d\n", i);
        i += 2;
    }

    printf("\n");

    // do-while loop
    i = 1;
    do {
        printf("%d\n", i);
        i += 2;
    } while (i <= 20);


    return 0;
}