#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    printf("Program Started\n");
    int a = 0;
    int b = 0;
    printf("Введите 2 целых числа:");
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);
    return 0;
}