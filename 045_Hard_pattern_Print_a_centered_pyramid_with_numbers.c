#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++)
            printf("  ");

        int num = i;
        for (int j = 1; j <= i; j++)
            printf("%d ", num++);

        num -= 2;
        for (int j = 1; j < i; j++)
            printf("%d ", num--);

        printf("\n");
    }
    return 0;
}

