#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define DEBOUNCE_MASK 0x01  // Example mask to check the least significant bit
#define DEBOUNCE_DELAY 5    // Number of cycles for debounce

bool debounce(uint8_t inputSignal) {
    static uint8_t stableSignal = 0;
    static uint8_t debounceCounter = 0;

    // Apply bitwise mask to check only the relevant bit (LSB here)
    if ((inputSignal & DEBOUNCE_MASK) == (stableSignal & DEBOUNCE_MASK)) {
        // If no change, increase debounce counter
        if (debounceCounter < DEBOUNCE_DELAY) {
            debounceCounter++;
            return false;  // Not yet stabilized
        } else {
            return true;  // Signal is stable
        }
    } else {
        // Reset debounce counter if signal has changed
        debounceCounter = 0;
        stableSignal = inputSignal;  // Update the stable signal to the current one
        return false;  // Signal not stable yet
    }
}

int main() {
    uint8_t inputSignal = 0b00000001;  // Simulated input signal (1 = active)

    // Simulate debouncing over multiple cycles
    for (int i = 0; i < 10; i++) {
        if (debounce(inputSignal)) {
            printf("Signal stabilized\n");
        } else {
            printf("Debouncing...\n");
        }
        // Simulate a change in the signal
        inputSignal ^= 0b00000001;  // Toggle the LSB
    }

    return 0;
}
