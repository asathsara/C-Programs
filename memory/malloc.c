/*
 * Program: Dynamic Memory Allocation Using malloc()
 * -------------------------------------------------
 * This program demonstrates the use of dynamic memory allocation in C using the `malloc()` function.
 * It allows the user to allocate memory for an array of integers at runtime, initialize the array,
 * and print the values stored in the dynamically allocated memory.
 *
 * Key Concepts:
 * - `malloc()` is used to allocate memory dynamically during program execution.
 * - The allocated memory is uninitialized and must be explicitly initialized by the user.
 * - The program checks if memory allocation is successful by verifying if `malloc()` returns NULL.
 * - Pointer arithmetic is used to access and manipulate the dynamically allocated memory.
 *
 * Steps:
 * 1. The user is prompted to enter the number of integers (`n`) for which memory should be allocated.
 * 2. Memory for `n` integers is allocated using `malloc()`.
 * 3. The program checks if the memory allocation was successful.
 * 4. The user initializes the allocated memory by entering `n` integers.
 * 5. The program prints the values stored in the dynamically allocated memory.
 * 6. Note: The program does not free the allocated memory, which is a good practice to avoid memory leaks.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n;

    printf("Enter a number to allocate memory: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    int *ptr = (int *)malloc(sizeof(n) * n);

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Initialize the allocated memory
    for (i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    // Print the values
    printf("The values are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }
    return 0;
}