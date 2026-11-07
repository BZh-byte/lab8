#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main(void)
{
    int n, i;
    char a, b;
    SetConsoleOutputCP(65001);
    printf("Введите количество символов: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    printf("Введите первый символ: ");
    if (scanf(" %c", &a) != 1) return 1;
    printf("Введите второй символ: ");
    if (scanf(" %c", &b) != 1) return 1;

    printf("Основной вывод: ");
    for (i = 0; i < n; i++) putchar(a);
    printf("\nС плюсом в начале и конце: +");
    for (i = 0; i < n; i++) putchar(a);
    printf("+\nПервая половина одним символом, вторая другим: ");
    for (i = 0; i < n; i++) putchar(i < n / 2 ? a : b);
    printf("\nС восклицательным знаком: ");
    for (i = 0; i < n; i++) { putchar(a); putchar('!'); }
    printf("\n");
    return 0;
}
