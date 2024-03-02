#include <stdio.h>

int main(void) {
    int i = 5;
    int *p = &i;

    int j = *p;  // これは int j = i と同じように働く
    printf("jの値は %d\n", j);  // => 5

    *p = 10;  // i = 10と同じように働く
    printf("iの値は %d\n", i);  // => 10
}
