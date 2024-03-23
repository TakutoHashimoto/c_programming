#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);

    printf("その数の5倍は %d です。\n", 5 * no);

    return 0;
}
