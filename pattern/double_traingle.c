#include <stdio.h>

int main(){

    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper triangle
    for (i = n; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    // Lower triangle
    for (i = 2; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
        
    }


    return 0;
}