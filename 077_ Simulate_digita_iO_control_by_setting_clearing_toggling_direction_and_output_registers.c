#include <stdio.h>
#include <stdint.h>

// Define bit positions
#define PIN0 (1 << 0)
#define PIN1 (1 << 1)
#define PIN2 (1 << 2)

void set_pin_output(uint8_t *dir_reg, uint8_t pin) {
    *dir_reg |= pin;
}

void clear_pin_output(uint8_t *dir_reg, uint8_t pin) {
    *dir_reg &= ~pin;
}

void toggle_output(uint8_t *out_reg, uint8_t pin) {
    *out_reg ^= pin;
}

int main() {
    uint8_t direction = 0x00; // All pins input
    uint8_t output = 0x00;

    set_pin_output(&direction, PIN0 | PIN1);
    toggle_output(&output, PIN0);
    clear_pin_output(&direction, PIN1);

    printf("Direction Reg: 0x%02X\n", direction);
    printf("Output Reg:    0x%02X\n", output);

    return 0;
}
