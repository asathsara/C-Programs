#ifndef PATIENT_H
#define PATIENT_H

#include "doctor.h" 

struct Patient 
{
    int id;
    char name[50];
    int age;
    struct Doctor assignedDoctor;  // 
};

// Function prototypes
void addPatient();
void viewPatients();

#endif // PATIENT_H