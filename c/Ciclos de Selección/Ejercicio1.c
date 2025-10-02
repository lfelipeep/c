#include <stdio.h>

int main() {
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b) printf("El mayor es: %d\n", a);
    else if (b > a) printf("El mayor es: %d\n", b);
    else printf("Son iguales.\n");

    return 0;
}
