/*
 * Simple Calculator Using Function Pointers
 * 
 * This program demonstrates the use of function pointers in C to implement a simple calculator.
 * The user is presented with a menu to choose an arithmetic operation (Addition, Subtraction, 
 * Multiplication, or Division). Based on the user's choice, the corresponding function is assigned 
 * to a function pointer and executed.
 *
 * Features:
 * - Uses function pointers to dynamically select and call the required arithmetic operation.
 * - Handles division by zero error gracefully.
 * - Uses a switch statement to determine the operation based on user input.
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
    int (*op)(int, int) = NULL; // Initialize function pointer

    // Menu for the user
    printf("Simple Calculator Using Function Pointers\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Get user input for numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Assign function pointer based on user choice
    switch (choice)
    {
    case 1:
        op = add;
        break;
    case 2:
        op = subtract;
        break;
    case 3:
        op = multiply;
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Error! Division by zero.\n");
            return 1;
        }
        op = divide;
        break;
    default:
        printf("Invalid choice!\n");
        return 1; // Exit with error code
    }

    // Call the function through pointer and display result
    printf("Result: %d\n", op(num1, num2));

    return 0;
}

// Function definitions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }