#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main(void)
{
    int m, n, i, k = 0;
    long long s = 0;
    SetConsoleOutputCP(65001);
    printf("Введите m и n (m <= n): ");
    if (scanf("%d %d", &m, &n) != 2 || m > n) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    for (i = m; i <= n; i++) {
        s += i;
        k++;
        printf("Выполнено %d раз\n", k);
        if (i == n) break;
    }
    printf("Сумма = %lld\n", s);
    return 0;
}
