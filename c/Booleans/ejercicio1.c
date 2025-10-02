#include <stdio.h>

int main() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    int mayor = edad >= 18;
    printf("Es mayor de edad? %s\n", mayor ? "Si" : "No");
    return 0;
}
