
    // TODO: Fix the loop so it correctly counts the string length without getting stuck.
    // Bug: The index counter is never incremented inside the loop, causing an infinite loop!


#include <stdio.h>

int main() {
    char str[] = "GitHub";
    int i = 0;

    while (str[i] != '\0') {
        // Missing increment step here
    }

    printf("Length of the string is: %d\n", i);
    return 0;
}
