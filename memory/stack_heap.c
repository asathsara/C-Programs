/*
 * Program: Student Object in Stack and Heap
 * -----------------------------------------
 * This program demonstrates the creation and usage of a `struct` object in both the stack and the heap.
 * It highlights the differences between stack and heap memory allocation in C.
 *
 * Key Concepts:
 * - Stack memory is automatically managed and used for local variables.
 * - Heap memory is dynamically allocated using `malloc()` and must be explicitly freed using `free()`.
 * - The `->` operator is used to access members of a structure through a pointer.
 *
 * Steps:
 * 1. A `struct Student` object is created in the stack and initialized with sample data.
 * 2. The details of the stack-allocated student object are printed, including its memory address.
 * 3. A `struct Student` object is dynamically allocated in the heap using `malloc()`.
 * 4. The heap-allocated student object is initialized with sample data, and its details are printed.
 * 5. The dynamically allocated memory is freed using `free()` to prevent memory leaks.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int id;
    int age;
    char name[50];
};

int main()
{

    // Creating a student object in the stack
    struct Student studentInStack;
    studentInStack.id = 1;
    studentInStack.age = 20;
    strcpy(studentInStack.name, "John Doe");

    printf("Student Id: %d\n", studentInStack.id);
    printf("Student Age: %d\n", studentInStack.age);
    printf("Student Name: %s\n", studentInStack.name);
    printf("Student Address: %p\n\n", &studentInStack);

    // Creating a student object in the heap
    struct Student *studentInHeap = (struct Student *)malloc(sizeof(struct Student));
    if (studentInHeap == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }
    studentInHeap->id = 2;
    studentInHeap->age = 22;
    strcpy(studentInHeap->name, "Jane Doe");

    printf("Student Id: %d\n", studentInHeap->id);
    printf("Student Age: %d\n", studentInHeap->age);
    printf("Student Name: %s\n", studentInHeap->name);
    printf("Student Address: %p\n", studentInHeap);

    free(studentInHeap); // Free the allocated memory

    return 0;
}
