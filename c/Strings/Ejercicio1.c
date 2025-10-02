#include <stdio.h>
#include <string.h>

int main() {
    char nombre[20], apellido[20], completo[40];

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Ingrese su apellido: ");
    scanf("%s", apellido);

    strcpy(completo, nombre);
    strcat(completo, " ");
    strcat(completo, apellido);

    printf("Nombre completo: %s\n", completo);
    return 0;
}
