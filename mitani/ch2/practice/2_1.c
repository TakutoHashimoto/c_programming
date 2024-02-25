/* 次のプログラムを修正する
#include <stdio.h>

int main(void) {
    x = 5 * 0.5;
    printf("計算結果は %f\n", x);
}
*/

// xの型が宣言されていないので、宣言する
#include <stdio.h>

int main(void) {
    double x = 5 * 0.5;
    printf("計算結果は %f\n", x);
}
