#include <stdio.h>
#include <string.h>
#include "patient.h"

struct Patient patients[100]; // Array to store patients
int patientCount = 0; // Number of patients

void addPatient(){

    printf("Enter patient ID: ");
    scanf("%d", &patients[patientCount].id);

    printf("Enter patient name: ");
    scanf("%[^\n]\n", patients[patientCount].name); // Read string with spaces

    printf("Enter patient age: ");
    scanf("%d\n", &patients[patientCount].age);

    printf("Enter Doctor's ID: ");
    scanf("%d", &patients[patientCount].assignedDoctor.id);
    
    printf("Enter Doctor's Name: ");
    scanf(" %[^\n]", patients[patientCount].assignedDoctor.name);
    
    printf("Enter Specialization: ");
    scanf(" %[^\n]", patients[patientCount].assignedDoctor.specialization);

    patientCount++;
    printf("\nPatient Added Successfully!\n");
}

void viewPatients(){

    if (patientCount == 0) {
        printf("No patients found.\n");
        return;
    }

    printf("\n--- List of Patients ---\n");
    for (int i = 0; i < patientCount; i++){
        
        printf("\nPatient ID: %d\n", patients[i].id);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Doctor Assigned: %s (%s)\n", 
               patients[i].assignedDoctor.name, 
               patients[i].assignedDoctor.specialization);
    }
    
    
}