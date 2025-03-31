/*
 * Program: Distance Between Two Points
 * ------------------------------------
 * This program calculates the distance between two points (x1, y1) and (x2, y2)
 * using the distance formula:
 *
 *      distance = sqrt((x2 - x1)² + (y2 - y1)²)
 *
 * The program includes input validation to ensure valid numerical coordinates are entered.
 *
 * Example:
 * - Input: (x1, y1) = (3, 4)  and  (x2, y2) = (7, 1)
 * - Calculation: sqrt((7 - 3)² + (1 - 4)²) = sqrt(16 + 9) = sqrt(25) = 5
 * - Output: "The distance between the points (3.00, 4.00) and (7.00, 1.00) is 5.00"
 */

#include <stdio.h>
#include <math.h> 

int main(){

    float x1, y1, x2, y2, distance;
    printf("Enter the coordinates of the first point (x1 y1): ");
    // Check if the input is a valid float
    if (scanf("%f %f", &x1, &y1) != 2) {
        printf("Invalid input. Please enter valid coordinates.\n");
        return 1; 
    }
    printf("Enter the coordinates of the second point (x2 y2): ");
    // Check if the input is a valid float
    if (scanf("%f %f", &x2, &y2) != 2) {
        printf("Invalid input. Please enter valid coordinates.\n");
        return 1; 
    }
    // Calculate the distance using the distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}