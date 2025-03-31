/*
 * Program: Average Calculator
 * ---------------------------
 * This program calculates the average of a given set of numbers.
 * The user is prompted to enter the number of elements, followed by the numbers themselves.
 * The program computes the sum of the numbers and then divides it by the count to find the average.
 * 
 * Example:
 * - Input: Enter 5 numbers: 10, 20, 30, 40, 50
 * - Calculation: (10 + 20 + 30 + 40 + 50) / 5 = 30
 * - Output: "The average is: 30.00"
 */

#include <stdio.h>

int main(){

    int n = 0;
    float sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    float average = sum / n;
    printf("The average is: %.2f\n", average);

    return 0;
}