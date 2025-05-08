#include <stdio.h>

const char* getThresholdBand(int input) {
    if (input < 10) return "LOW";
    else if (input < 50) return "MEDIUM";
    else return "HIGH";
}

int main() {
    int input = 30;
    printf("Threshold band: %s\n", getThresholdBand(input));
    return 0;
}
