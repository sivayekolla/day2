#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

// UART status register bit masks
#define UART_TX_READY  (1 << 0)  // Bit 0 - Transmit buffer ready
#define UART_RX_READY  (1 << 1)  // Bit 1 - Receive buffer ready

bool are_uart_buffers_ready(uint8_t status_reg) {
    // Check if both TX and RX bits are set
    return (status_reg & (UART_TX_READY | UART_RX_READY)) == (UART_TX_READY | UART_RX_READY);
}

int main() {
    uint8_t uart_status = UART_TX_READY | UART_RX_READY;

    if (are_uart_buffers_ready(uart_status)) {
        printf("UART: Both TX and RX buffers are ready.\n");
    } else {
        printf("UART: Waiting for buffer(s)...\n");
    }

    return 0;
}
