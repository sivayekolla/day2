#include <stdio.h>
#include <stdbool.h>

bool isDivisibleBy2ButNot4(int num) {
    return (num % 2 == 0 && num % 4 != 0);
}

int main() {
    int num = 6;
    if (isDivisibleBy2ButNot4(num)) {
        printf("Number %d is divisible by 2 but not 4.\n", num);
    } else {
        printf("Number %d is either not divisible by 2 or divisible by 4.\n", num);
    }
    return 0;
}
