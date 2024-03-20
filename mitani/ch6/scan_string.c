#include <stdio.h>

int main(void)
{
    char str[32];
    printf("名前を入力してください\n");
    scanf("%s", str);
    printf("%s さん、こんにちは\n", str);
}
