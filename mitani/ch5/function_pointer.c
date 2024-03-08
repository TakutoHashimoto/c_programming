#include <stdio.h>

void func(int a) {
    printf("func関数が呼び出されました。引数の値は %d\n", a);
}

int main() {
    // 関数ポインタの初期化
    void (*pF)(int) = func;

    // *pFはfuncの別名として使えて、func(10)と同じ働きをする
    (*pF)(10);
}
