#include <stdio.h>

int absolute_value(int value) {
    if (value < 0) {
        return value * (-1);
    }
    return value;
}

int main(void) {
    int value = -2;
    printf("%d\n", absolute_value(value));
}
