/*
 * Program: Circle Area and Circumference Calculator
 * -------------------------------------------------
 * This program calculates:
 * 1. The area of a circle using the formula: `Area = π * r²`
 * 2. The circumference of a circle using the formula: `Circumference = 2 * π * r`
 *
 * Steps:
 * - The program prompts the user to enter the radius of the circle.
 * - It calculates the area and circumference using the predefined constant `M_PI` from `<math.h>`.
 * - The results are displayed with two decimal precision.
 *
 * Important Notes:
 * - `#define _USE_MATH_DEFINES` enables mathematical constants like `M_PI` in some compilers.
 * - `%lf` is used in `scanf` for reading `double` values.
 * - `%.2lf` is used in `printf` to limit the output to 2 decimal places.
 */

#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h> 

int main()
{
    printf("Enter the radius of the circle: ");
    double radius;
    scanf("%lf", &radius);

    double area = M_PI * radius * radius; 
    double circumference = 2 * M_PI * radius;

    printf("Area of the circle: %.2lf\n", area);
    printf("Circumference of the circle: %.2lf\n", circumference);

    return 0;
}
