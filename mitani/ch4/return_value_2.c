#include <stdio.h>
#include <stdbool.h>

bool is_possible_number(double d) {
    return d > 0;
}

int main(void) {
    double d = -1.5;
    if (is_possible_number(d)) {
        printf("dの値は正です\n");
    } else {
        printf("dの値は正ではありません\n");
    }
}
