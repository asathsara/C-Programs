#include <stdio.h>
#include "patient.h"

// Make global variables accessible in this file
extern struct Patient patients[];
extern int patientCount;

void saveToFile(){
    FILE *file = fopen("patients.txt", "w");
    if (file == NULL) {       
        printf("Error opening file.\n");
        return;
    }

    fwrite(&patientCount, sizeof(int), 1, file); // Write the number of patients
    fwrite(patients, sizeof(struct Patient), patientCount, file);
    
    fclose(file);
    printf("\nData Saved Successfully!\n");
    
}

void loadFromFile(){

    FILE *file = fopen("patients.txt", "r");
    if (file == NULL) {       
        printf("Error opening file.\n");
        return;
    }

    fread(&patientCount, sizeof(int), 1, file);
    fread(patients, sizeof(struct Patient), patientCount, file);
    
    fclose(file);
    printf("\nData Loaded Successfully!\n");
}