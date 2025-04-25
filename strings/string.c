#include <stdio.h>

int main() {
    char str1[] = "Hello";      // Can be modified
    char *str2 = "World";       // Should not be modified

    str1[0] = 'J';              // OK
    // str2[0] = 'J';           // Undefined behavior

    printf("%s\n", str1);       // Output: Jello
    printf("%s\n", str2);       // Output: World

    return 0;
}
