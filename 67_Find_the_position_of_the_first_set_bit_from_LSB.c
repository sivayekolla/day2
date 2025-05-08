#include <stdint.h>

int first_set_bit_pos(uint8_t value) {
    for (int i = 0; i < 8; i++) {
        if (value & (1 << i)) return i;
    }
    return -1; // No bits set
}
