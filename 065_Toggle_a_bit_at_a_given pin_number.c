#include <stdio.h>
#include <stdint.h>

uint8_t toggle_pin(uint8_t port, uint8_t pin) {
    return port ^ (1 << pin);
}

int main() {
    uint8_t port = 0x10; // 00010000
    uint8_t pin = 4;
    uint8_t result = toggle_pin(port, pin);
    printf("Port before toggle: 0x%02X, After toggling pin %d: 0x%02X\n", port, pin, result);
    return 0;
}
