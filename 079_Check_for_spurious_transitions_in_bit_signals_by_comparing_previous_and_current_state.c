#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool checkSpuriousTransition(uint16_t prevState, uint16_t currentState) {
    // Use XOR to detect changes between previous and current state
    uint16_t transitions = prevState ^ currentState;
    
    // If any bit has changed (transitions are not zero), return true for spurious transition
    return transitions != 0;
}

int main() {
    uint16_t prevState = 0b1010101010101010;
    uint16_t currentState = 0b1010101010101000;  // Simulated state change

    if (checkSpuriousTransition(prevState, currentState)) {
        printf("Spurious transition detected!\n");
    } else {
        printf("No spurious transition.\n");
    }

    return 0;
}
