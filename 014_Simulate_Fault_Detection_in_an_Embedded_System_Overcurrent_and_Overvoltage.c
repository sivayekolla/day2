#include <stdio.h>

#define overcurrent_threshold 10
#define overvoltage_threshold 15

void fault_detection(float current, float voltage) {
    if (current > overcurrent_threshold) {
        printf("overcurrent fault detected!\n");
    } else if (voltage > overvoltage_threshold) {
        printf("overvoltage fault detected!\n");
    } else {
        printf("system operating normally.\n");
    }
}

int main() {
    float current = 12.5;
    float voltage = 16.0;

    fault_detection(current, voltage);
    return 0;
}
