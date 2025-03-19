/*
 * Program: Celsius to Fahrenheit Converter
 * ----------------------------------------
 * This program converts a temperature given in Celsius to Fahrenheit.
 * It demonstrates:
 * - The use of `scanf()` for user input.
 * - Floating-point arithmetic operations in C.
 * - The use of `printf()` with formatting for precise output.
 *
 * Formula for Conversion:
 *   Fahrenheit = (Celsius * 9/5) + 32
 *
 * Steps:
 * 1. The user enters a temperature in Celsius.
 * 2. The program reads the input and stores it in the `celcius` variable.
 * 3. It performs the conversion using the formula.
 * 4. The result is displayed with two decimal places for better readability.
 */

#include <stdio.h>

int main() {

    float celcius, fahrenheit;

    printf("Enter temperature in Celcius:  \n");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);


    return 0;
}