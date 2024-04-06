#include <stdio.h>

int main(void)
{
    int x, y;

    printf("二つの整数を入力せよ。\n");

    printf("整数x: ");
    scanf("%d", &x);

    printf("整数y: ");
    scanf("%d", &y);

    printf("xの値はyの%d%%です。\n", 100 * x / y);
}
