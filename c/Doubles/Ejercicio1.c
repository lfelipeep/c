#include <stdio.h>

int main() {
    double a, b;
    printf("Ingrese dos numeros: ");
    scanf("%lf %lf", &a, &b);

    printf("Division: %.2lf\n", a / b);
    return 0;
}
