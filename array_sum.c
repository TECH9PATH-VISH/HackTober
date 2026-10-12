
    // TODO: Fix the loop so it calculates the sum of ALL elements in the array.
    // Bug: The loop starts at index 1 instead of index 0, completely missing the first number (5).



#include <stdio.h>

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int n = 5;
    int sum = 0;

    for (int i = 1; i < n; i++) {
        sum += numbers[i];
    }

    printf("The total sum is: %d\n", sum);
    return 0;
}
