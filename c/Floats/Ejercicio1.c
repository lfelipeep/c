#include <stdio.h>

int main() {
    float n1, n2, n3;
    printf("Ingrese 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    float promedio = (n1 + n2 + n3) / 3;
    printf("El promedio es: %.2f\n", promedio);
    return 0;
}
