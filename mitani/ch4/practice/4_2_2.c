#include <stdio.h>

double rectangle_area(double width, double height) {
    return width * height;
}

int main(void) {
    double width = 2.5;
    double height = 3.5;
    printf("%.2f\n", rectangle_area(width, height));
}
