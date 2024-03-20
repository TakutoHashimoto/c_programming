#include <stdio.h>

int main() {
    char str[] = "dog";

    for (int i = 0; i < 3; i++) {
        printf("str[%d]は %c\n", i, str[i]);
    }

    printf("犬は英語で %s\n", str);
}
