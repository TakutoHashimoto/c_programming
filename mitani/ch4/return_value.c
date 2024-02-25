#include <stdio.h>

double circle_area(double r) {
    return r * r * 3.14159;
}

int main(void) {
    double radius = 2.5;
    printf("半径%.1fの円の面積は %.2f\n", radius, circle_area(radius));
}
