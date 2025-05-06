#include <stdio.h>
#include <math.h>
int main() {
    int n, sum = 0, temp, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    for (int t = n; t > 0; t /= 10) digits++;

    for (int t = n; t > 0; t /= 10)
        sum += pow(t % 10, digits);

    if (sum == temp)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}

