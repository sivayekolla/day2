#include <stdio.h>

void compare_drift(int val1, int val2, int val3) {
    int drift1 = abs(val1 - val2);
    int drift2 = abs(val2 - val3);
    int drift3 = abs(val1 - val3);

    int max_drift = drift1;
    if (drift2 > max_drift) {
        max_drift = drift2;
    }
    if (drift3 > max_drift) {
        max_drift = drift3;
    }

    printf("maximum drift value: %d\n", max_drift);
}

int main() {
    int val1 = 100;
    int val2 = 105;
    int val3 = 110;

    compare_drift(val1, val2, val3);
    return 0;
}
