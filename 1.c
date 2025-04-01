#include <stdio.h>
#include <math.h>

int main() {
    int a, b, y;
    double z;
    int valid_input = 0;

    while (!valid_input) {
        printf("Введіть цілі числа a, b, y: ");
        scanf("%d %d %d", &a, &b, &y);

        // Перевірка допустимості
        if (a * b < 0) {
            printf("Помилка: Підкореневий вираз ab від'ємний. Введіть інші значення.\n");
        } else if (a - b * b < 0) {
            printf("Помилка: Підкореневий вираз a - b^2 від'ємний. Введіть інші значення.\n");
        } else {
            valid_input = 1; // Вхідні дані коректні, вихід з циклу
        }
    }

    // Обчислення значення функції
    z = sqrt(a * b) + 2 * sqrt(a - (double)b * b) + y;

    printf("Значення функції z: %.2lf\n", z);

    return 0;
}