#include <stdio.h>
#include "file_handler.h"
#include "patient.h"

int main(){
    loadFromFile(); // Load existing data from file

    int choice;
    
    do {
        printf("\n Hospital Management System\n");
        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPatient(); break;
            case 2: viewPatients(); break;
            case 3: saveToFile(); printf("Exiting...\n"); break;
            default: printf("Invalid Choice! Try Again.\n");
        }
    } while (choice != 3);

    return 0;
}