#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main(void)
{
    int n, i;
    unsigned long long s = 1;
    SetConsoleOutputCP(65001);
    printf("Введите максимальную степень n (0..63): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 63) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    for (i = 0; i <= n; i++) {
        printf("2^%d = %llu\n", i, s);
        if (i < n) s *= 2;
    }
    return 0;
}
