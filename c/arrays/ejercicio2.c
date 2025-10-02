#include <stdio.h>

int main() {
    int numeros[5] = {2, 4, 6, 8, 10};
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }

    printf("La suma es: %d\n", suma);
    return 0;
}
