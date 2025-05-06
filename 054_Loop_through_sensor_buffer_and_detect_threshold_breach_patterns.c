#include <stdio.h>
int main() {
    int buffer[] = {25, 30, 75, 85, 95, 60};
    int threshold = 80, size = sizeof(buffer)/sizeof(buffer[0]);

    for (int i = 0; i < size; i++) {
        if (buffer[i] > threshold)
            printf("Threshold breach at index %d: %d\n", i, buffer[i]);
    }

    return 0;
}

