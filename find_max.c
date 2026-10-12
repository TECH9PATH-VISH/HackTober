// TODO: Fix the loop condition so it checks ALL elements up to the end of the array.
// Bug: The loop stops one element early (misses the last element '23') due to an incorrect boundary.

#include <stdio.h>

int main() {
    int arr[] = {12, 45, 2, 67, 34, 99, 23};
    int n = 7;
    int max = arr[0];

    
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum element is: %d\n", max);
    return 0;
}
