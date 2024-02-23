#include <stdio.h>

double average(double a, double b, double c) {
    double sum = a + b + c;
    return sum / 3;
}

int main(void) {
    double a = 2.5;
    double b = 3.5;
    double c = 4.5;
    printf("%f\n", average(a, b, c));
}
