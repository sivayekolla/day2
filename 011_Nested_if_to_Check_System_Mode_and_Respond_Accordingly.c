#include <stdio.h>

void checkSystemMode(int mode) {
    if (mode == 0) {
        printf("System in Idle mode\n");
    } else {
        if (mode == 1) {
            printf("System in Active mode\n");
        } else {
            printf("Unknown system mode\n");
        }
    }
}

int main() {
    int systemMode = 1;
    checkSystemMode(systemMode);
    return 0;
}
