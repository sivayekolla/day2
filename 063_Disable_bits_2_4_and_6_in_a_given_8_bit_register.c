
#include <stdio.h>
#include <stdint.h>

uint8_t disable_bits_2_4_6(uint8_t reg) {
    return reg & ~( (1 << 2) | (1 << 4) | (1 << 6) );
}

int main() {
    uint8_t input = 0xFF; // All bits set
    uint8_t result = disable_bits_2_4_6(input);
    printf("Original: 0x%02X, After disabling bits 2, 4, 6: 0x%02X\n", input, result);
    return 0;
}
