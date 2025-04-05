#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int id;
    int age;
    char name[50];
};

int main() {

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
    struct Student *studentInHeap = (struct Student *) malloc(sizeof(struct Student));
    if (studentInHeap == NULL) {
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
