#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool is_even_parity(uint8_t value) {
    uint8_t count = 0;
    while (value) {
        count ^= (value & 1);
        value >>= 1;
    }
    return count == 0;
}

int main() {
    uint8_t value = 0x0F; // 00001111 -> 4 set bits = even parity
    bool parity = is_even_parity(value);
    printf("Value: 0x%02X\n", value);
    printf("Even parity? %s\n", parity ? "Yes" : "No");
    return 0;
}
