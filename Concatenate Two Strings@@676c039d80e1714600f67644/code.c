#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    // Read first string
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove trailing newline

    // Read second string
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove trailing newline

    // Output
    printf("%s", str1);  // prints without adding a newline
    puts(str2);          // prints and adds a newline automatically

    return 0;
}
