/*
 * Simple Calculator Using an Array of Function Pointers
 * 
 * This program demonstrates the use of an array of function pointers in C to implement a simple calculator.
 * The user is presented with a menu to choose an arithmetic operation (Addition, Subtraction, 
 * Multiplication, or Division). Based on the user's choice, the corresponding function is executed 
 * through an array of function pointers.
 *
 * Features:
 * - Uses an array of function pointers to dynamically select and call the required arithmetic operation.
 * - Handles division by zero error gracefully.
 * - Uses a structured approach to store function pointers, making the code more concise.
 */

#include <stdio.h>

// Function prototypes
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{

    int num1, num2, choice;
    int (*op[4])(int, int); // Array of function pointers

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;

    // Menu for the user
    printf("Simple Calculator Using Function Pointers\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4)
    {
        printf("Invalid choice!\n");
        return 1; // Exit with error code
    }
    
    // Get user input for numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check for division by zero
    if (choice == 4 && num2 == 0)
    {
        printf("Error! Division by zero.\n");
        return 1; // Exit with error code
    }

    // Call the function through pointer and display result
    printf("Result: %d\n", op[choice -1](num1, num2));

    return 0;
}

// Function definitions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }