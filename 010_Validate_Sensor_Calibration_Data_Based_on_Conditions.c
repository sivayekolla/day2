#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define SENSOR_CALIBRATION_OFFSET_LIMIT 10
#define SCALE_FACTOR_MIN 1.1

bool isValidCalibrationData(int offset, float scaleFactor) {
    return (abs(offset) <= SENSOR_CALIBRATION_OFFSET_LIMIT && scaleFactor > SCALE_FACTOR_MIN);
}

int main() {
    int offset = 5;
    float scaleFactor = 1.2;
    if (isValidCalibrationData(offset, scaleFactor)) {
        printf("Sensor calibration data is valid.\n");
    } else {
        printf("Sensor calibration data is invalid.\n");
    }
    return 0;
}
