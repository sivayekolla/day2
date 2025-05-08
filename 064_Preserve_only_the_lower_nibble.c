#include <stdio.h>
#include <stdint.h>

uint8_t preserve_lower_nibble(uint8_t value) {
    return value & 0x0F;
}

int main() {
    uint8_t input = 0xAB; // 10101011
    uint8_t result = preserve_lower_nibble(input);
    printf("Original: 0x%02X, Lower nibble: 0x%02X\n", input, result);
    return 0;
}
