/*
このプログラムを実行すると3.0と出力されてしまう
正しく3.5と表示されるように修正する

#include <stdio.h>

int main(void) {
    int a = 7;
    int b = 2;
    double c = a / b;
    printf("%.1f\n", c);
}
*/

#include <stdio.h>

int main(void) {
    int a = 7;
    int b = 2;
    double c = (double)a / (double)b;
    printf("%.1f\n", c);
}
