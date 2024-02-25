#include <stdio.h>

int main(void) {
    int i = 5;
    int *p = &i;
    printf("iのアドレスは %p\n", &i);
    printf("pの値は %p\n", &i);
    printf("iの値は %d\n", i);
    printf("*pの値は %d\n", *p);
}
