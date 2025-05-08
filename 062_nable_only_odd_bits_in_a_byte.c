#include <stdint.h>

uint8_t enable_odd_bits(uint8_t byte) {
    return byte | 0xAA; // 0xAA = 10101010
}

