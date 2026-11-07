#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    int n, i;
    double summa_cos = 0, summa_sin = 0, p = 1;
    SetConsoleOutputCP(65001);
    printf("Введите N (от 1 до 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Ошибка ввода.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        summa_cos += cos((double)i);
        summa_sin += sin((double)i);
        if (fabs(summa_sin) < 1e-12) {
            printf("Ошибка: знаменатель близок к нулю.\n");
            return 1;
        }
        p *= summa_cos / summa_sin;
    }
    printf("Результат = %.6f\n", p);
    return 0;
}
