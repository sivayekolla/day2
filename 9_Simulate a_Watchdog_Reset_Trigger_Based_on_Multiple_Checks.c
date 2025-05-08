#include <stdio.h>

void watchdogResetTrigger(int condition1, int condition2) {
    if (condition1 == 0) {
        if (condition2 == 0) {
            printf("Watchdog reset triggered\n");
        }
    }
}

int main() {
    int condition1 = 0, condition2 = 0;
    watchdogResetTrigger(condition1, condition2);
    return 0;
}
