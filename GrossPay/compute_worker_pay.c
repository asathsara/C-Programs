#include <stdio.h>

int main()
{

    const int MAX_HOURS = 40;
    const double HOUR_RATE = 900;

    int numWorkes;
    FILE *file = fopen("worker_pay.txt", "w");

    if (file == NULL)
    {
        printf("Error: Opening file");
        return 1;
    }

    printf("Enter number of workers: ");
    scanf("%d", &numWorkes);

    if (numWorkes <= 0)
    {
        printf("Invalid input! Number of workers must be positive.\n");
        return 1;
    }

    for (int i = 0; i < numWorkes; i++)
    {
        int workerID;
        double hours, pay;

        printf("Enter Worker ID: ");
        scanf("%d", &workerID);

        printf("Enter hours worked: ");
        scanf("%lf", &hours);

        if (hours <= 0)
        {
            printf("Invalid input! Number of hours must be positive.\n");
            return 1;
        }

        if (hours <= MAX_HOURS)
        {
            pay = hours * HOUR_RATE;
        }
        else
        {

            pay = MAX_HOURS * HOUR_RATE;
            pay += (hours - MAX_HOURS) * (HOUR_RATE * 2);
        }

        printf("Worker %d Pay: %.2f\n", workerID, pay);

        fprintf(file, "Worker ID: %d, Weekly Pay: Rs. %.2f\n", workerID, pay);
    }

    fclose(file);
    return 0;
}