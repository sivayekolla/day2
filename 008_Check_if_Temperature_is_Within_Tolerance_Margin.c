#include <stdio.h>
#include <stdbool.h>

#define TEMPERATURE_MIN -40
#define TEMPERATURE_MAX 125

bool isTemperatureWithinTolerance(int temperature, int margin) {
    return (temperature >= (TEMPERATURE_MIN + margin) && temperature <= (TEMPERATURE_MAX - margin));
}

int main() {
    int temperature = 50, margin = 5;
    if (isTemperatureWithinTolerance(temperature, margin)) {
        printf("Temperature %d is within tolerance.\n", temperature);
    } else {
        printf("Temperature %d is out of tolerance.\n", temperature);
    }
    return 0;
}
