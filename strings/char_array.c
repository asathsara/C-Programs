#include <stdio.h>

int main(){

    char arr[100];

    printf("Enter a string:  ");
    scanf("%s", arr);

    printf("You entered: %s\n", arr);
    printf("Length of the string: %lu\n", sizeof(arr)/sizeof(arr[0]));
    printf("Size of the string: %lu\n", sizeof(arr)); // size of the array in bytes

    return 0;
}