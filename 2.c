#include <stdio.h>

int main() {
    int sum_for = 0, sum_while = 0, sum_do_while = 0;
    int count_for = 0, count_while = 0, count_do_while = 0;
    double average_for, average_while, average_do_while;
    int i;

    // Обчислення середнього арифметичного з циклом for
    for (i = 10; i <= 50; i++) {
        sum_for += i;
        count_for++;
    }
    average_for = (double)sum_for / count_for;

    // Обчислення середнього арифметичного з циклом while
    i = 10;
    while (i <= 50) {
        sum_while += i;
        count_while++;
        i++;
    }
    average_while = (double)sum_while / count_while;

    // Обчислення середнього арифметичного з циклом do...while
    i = 10;
    do {
        sum_do_while += i;
        count_do_while++;
        i++;
    } while (i <= 50);
    average_do_while = (double)sum_do_while / count_do_while;

    printf("Середнє арифметичне (for loop): %.2lf\n", average_for);
    printf("Середнє арифметичне (while loop): %.2lf\n", average_while);
    printf("Середнє арифметичне (do...while loop): %.2lf\n", average_do_while);

    return 0;
}