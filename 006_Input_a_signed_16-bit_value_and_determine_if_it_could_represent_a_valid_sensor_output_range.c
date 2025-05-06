//Input a signed 16-bit value and determine if it could represent a valid sensor output range.












#include <stdio.h>

int main() {
    int value;
    printf("Enter a signed 16-bit sensor value: ");
    scanf("%d", &value);

    if (value >= -32768 && value <= 32767) {
        printf("Valid sensor output: %d\n", value);
    } else {
        printf("Invalid sensor output! Out of 16-bit signed range.\n");
    }

    return 0;
}

