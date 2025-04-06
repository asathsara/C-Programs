/*
    This program demonstrates how an integer is stored in memory.

    - An integer variable 'i' is initialized with the value 100.
    - A pointer 'ptr' is created to point to the memory address of 'i', 
      but it is cast to 'unsigned char*' to allow viewing each byte individually.
    - We loop through each byte of 'i' (since an int is 4 bytes) and print 
      its value in hexadecimal.

    This helps visualize how integers are stored in memory byte-by-byte 
    (useful for understanding endianness and memory layout).
*/

#include <stdio.h>

int main() {
    int i = 100; // Example integer

    // Let's create a pointer to the bytes of the integer
    unsigned char *ptr = (unsigned char*)&i;

    printf("Integer value: %d\n", i);
    printf("Memory representation (in hex):\n");

    for (int j = 0; j < sizeof(i); j++) {
        printf("Byte %d: 0x%02x\n", j, ptr[j]);
    }

    return 0;
}
