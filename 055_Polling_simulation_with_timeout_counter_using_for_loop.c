#include <stdio.h>
int main() {
    int timeout = 1000;
    int sensor_ready = 0;

    for (int i = 0; i < timeout; i++) {
        // simulate condition
        if (i == 567) {
            sensor_ready = 1;
            printf("Sensor ready at iteration %d\n", i);
            break;
        }
    }

    if (!sensor_ready)
        printf("Timeout! Sensor not ready.\n");

    return 0;
}

