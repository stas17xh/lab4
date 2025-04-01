#include <stdio.h>

int main() {
    int n, x;
    int i, j;
    int sum = 0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    printf("Введіть ціле число x: ");
    scanf("%d", &x);

    for (i = 1; i <= n; i++) {
        for (j = 2; j <= n; j++) {
            sum += (2 * x + i - j);
        }
    }

    printf("Результат: %d\n", sum);

    return 0;
}