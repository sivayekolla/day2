//Compare two ADC readings and determine if there's a fault condition.




#include <stdio.h>
int main() {
    int a1, a2;
    const int thhd = 150;  

    printf("Enter ADC reading 1: ");
    scanf("%d", &a1);

    printf("Enter ADC reading 2: ");
    scanf("%d", &a2);

    int diff = (a1 - a2);

    if (diff > thhd) {
        printf("FAULT detected! Difference = %d exceeds threshold.\n", diff);
    } else {
        printf(" Diff = %d within acceptable range\n", diff);
    }

    
}

