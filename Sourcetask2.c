#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(void)
{
    double x, y, shag;
    int i, kol;
    SetConsoleOutputCP(65001);
    printf("Функция y = |exp(x) - 2| - x^2, x от 1 до 3\n");
    printf("Введите шаг: ");
    if (scanf("%lf", &shag) != 1 || shag <= 0 || shag > 2) {
        printf("Ошибка: шаг должен быть больше 0 и не больше 2.\n");
        return 1;
    }
    kol = (int)(2.0 / shag + 1e-9);
    if (kol > 10000) {
        printf("Слишком маленький шаг.\n");
        return 1;
    }
    printf("-------------------------\n");
    printf("|    x    |     y      |\n");
    printf("-------------------------\n");
    for (i = 0; i <= kol; i++) {
        x = 1.0 + i * shag;
        y = fabs(exp(x) - 2.0) - x * x;
        printf("| %7.3f | %10.4f |\n", x, y);
    }
    if (fabs(1.0 + kol * shag - 3.0) > 1e-8) {
        x = 3.0;
        y = fabs(exp(x) - 2.0) - x * x;
        printf("| %7.3f | %10.4f |\n", x, y);
    }
    printf("-------------------------\n");
    return 0;
}
