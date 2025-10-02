#include <stdio.h>

int main() {
    double radio;
    printf("Ingrese el radio: ");
    scanf("%lf", &radio);

    double area = 3.14159 * radio * radio;
    printf("El area es: %.2lf\n", area);
    return 0;
}
