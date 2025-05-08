#include <stdio.h>
#include <stdint.h>

#define SET_BIT(REG, BIT) ((REG) |= (1 << (BIT)))

int main() {
    uint8_t reg = 0x00;
    SET_BIT(reg, 5); 
}