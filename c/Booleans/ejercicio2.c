#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    int positivo = n > 0;
    printf("El numero es positivo? %s\n", positivo ? "Si" : "No");
    return 0;
}
