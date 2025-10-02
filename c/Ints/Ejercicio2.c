#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    printf("El resto es: %d\n", a % b);
    return 0;
}
