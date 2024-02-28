#include <stdio.h>

int main(void) {
    int i = 5;
    int *p = &i;
    printf("int *型のポインタのサイズ: %d\n", sizeof(int *));
    printf("double *型のポインタのサイズ: %d\n", sizeof(double *));

    printf("iのアドレスは %p\n", &i);
    printf("pの値は %p\n", &i);
    printf("iの値は %d\n", i);  // => 5
    printf("*pの値は %d\n", *p);  // => 5
}
