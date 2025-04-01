#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    double a = -PI;
    double b = PI;
    double dx = PI / 10.0;
    double x, y;

    printf("-----------------------\n");
    printf("|      x      |      y      |\n");
    printf("-----------------------\n");

    for (x = a; x <= b; x += dx) {
        y = 5 * x * sin(x);
        printf("| %11.7lf | %11.7lf |\n", x, y);
    }

    printf("-----------------------\n");

    return 0;
}