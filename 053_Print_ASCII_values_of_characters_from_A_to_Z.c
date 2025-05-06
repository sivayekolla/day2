//Print ASCII values of characters from A to Z.







	#include <stdio.h>

int main() {
    char ch;
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("Character: %c  ASCII: %d\n", ch, ch);
    }
    return 0;
}

