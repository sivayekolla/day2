#include <stdio.h>
int main() {
    int n, reversed = 0, original, rem;
    printf("Enter number: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

