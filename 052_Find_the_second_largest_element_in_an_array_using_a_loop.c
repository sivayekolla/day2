#include <stdio.h>
int main() {
    int arr[] = {5, 1, 8, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Second largest: %d\n", second);
    return 0;
}

