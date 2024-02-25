#include <stdio.h>

int main(void) {
    int i;
    printf("iの値を入力してください: ");
    scanf("%d", &i);

    switch (i) {
    case 1:
        printf("A");
    case 2:
        break;
    case 3:
        printf("B");
    case 4:
    default:
        printf("C");
    }
}
