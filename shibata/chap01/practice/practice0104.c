// 小数をint型の変数に代入しようとしている
// ErrorではなくWarningが出る
// コンパイル自体は可能で、実行すると、3が出力される（キャストされる）

#include <stdio.h>

int main(void)
{
    int x = 3.14;

    printf("xの値は%dです。\n", x);

    return 0;
}
